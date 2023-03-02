import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      double num1 = scnr.nextDouble();
      double num2 = scnr.nextDouble();
      double epsilon = scnr.nextDouble();

      scnr.close();

      if (Math.abs(num1 - num2) <= 0.001) {
         System.out.println("equal");
      } else if (Math.abs(num1 - num2) <= epsilon) {
         System.out.println("close enough");
      } else {
         System.out.println("not close");
      }
      
   }
}
