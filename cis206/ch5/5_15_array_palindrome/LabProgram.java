import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int arrLen = scnr.nextInt();
      int[] userValues = new int[arrLen]; // List of integers from input
      int[] backValues = new int[arrLen];

      for (int i = 0; i < backValues.length; i++) {
         userValues[i] = scnr.nextInt();
      }

      scnr.close();

      for (int i = 0; i < backValues.length; i++) {
         backValues[i] = userValues[arrLen - 1 - i];
      }

      boolean isPalindrome = true;
      for (int i = 0; i < arrLen; i++) {
         if (userValues[i] != backValues[i]) {
            isPalindrome = false;
            break;
         }
      }
      if (isPalindrome) {
         System.out.println("yes");
      } else {
         System.out.println("no");
      }
   }
}