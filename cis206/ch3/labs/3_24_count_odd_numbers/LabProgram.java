import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      int count = 0;
      for (int i = 0; i < 4; i++) {
         int userNum = scnr.nextInt();
         if (userNum % 2 != 0){
             count++;
         }
         
      }
      scnr.close();
      System.out.println(count);
   }
}
