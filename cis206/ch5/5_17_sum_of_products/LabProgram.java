import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int size;

      size = scnr.nextInt();
      int productVal = 0;
      int[] listA = new int[size]; // List A
      int[] listB = new int[size]; // List B

      /* Type your code here. */
      for (int i = 0; i < size; i++) {
         listA[i] = scnr.nextInt();
      }
      for (int j = 0; j < size; j++) {
         listB[j] = scnr.nextInt();
      }
      scnr.close();
      for (int i = 0; i < size; i++) {
         productVal += listA[i] * listB[i];
      }
      System.out.println(productVal);
   }
}