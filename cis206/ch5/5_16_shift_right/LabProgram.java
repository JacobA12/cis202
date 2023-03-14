import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int numVal = scnr.nextInt();
      int[] userValues = new int[numVal]; // List of integers from input

      for (int i = 0; i < numVal; i++) {
         userValues[i] = scnr.nextInt();
      }

      scnr.close();

      int lastVal = userValues[numVal - 1];

      for (int i = numVal - 1; i > 0; i--) {

         userValues[i] = userValues[i - 1];
      }

      userValues[0] = lastVal;

      for (int i = 0; i < numVal; i++) {
         System.out.print(userValues[i] + " ");
      }
      System.out.println();
   }
}