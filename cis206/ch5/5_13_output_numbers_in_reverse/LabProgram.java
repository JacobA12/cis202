import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int numElements; 
      numElements = scnr.nextInt(); 
     
      int[] userList = new int[numElements]; 
      
      int[] reverseList = new int[numElements];

      
      for (int i = 0; i < numElements; i++) {
         userList[i] = scnr.nextInt();
      }
      scnr.close();
     
      for (int i = 0; i < numElements; i++) {
         reverseList[i] = userList[numElements - 1 - i];
      }

      
      for (int i = 0; i < reverseList.length; i++) {
         System.out.print(reverseList[i] + ",");
      }
   }
}