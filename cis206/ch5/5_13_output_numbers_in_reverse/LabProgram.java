import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int numElements; // Number of integers in user's list
      numElements = scnr.nextInt(); // Input begins with number of integers that follow
     
      int[] userList = new int[numElements]; // List of numElement integers specified by the user
      // Add more variables as needed
      int[] reverseList = new int[numElements];
      int userNum;


      /* Type your code here. */
      for (int i = numElements; i >= 0; i--) {
         for (int j = 0; j < numElements; j++) {
            userNum = scnr.nextInt();
            reverseList[j] = userList[i];
         }
      }
      for (int i = 0; i < reverseList.length; i++) {
         System.out.print(reverseList[i] + " ");
      }
   }
}
