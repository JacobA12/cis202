/* 
 * Integer userVal is read from input. Assume userVal is greater than 10000 and less than 99999. 
 * Assign thousandsDigit with userVal's thousands place value.
 * 
 * Ex: If the input is 16947, then the output is:
 * The value in the thousands place is: 6 
 */
import java.util.Scanner;
 
public class ValueFinder {
   public static void main(String[] args) {
      try (Scanner scnr = new Scanner(System.in)) {
         int userVal;
         int thousandsDigit;
         int tmpVal;
 
         userVal = scnr.nextInt();

         /* Your code goes here */
         tmpVal = userVal / 1000;
         thousandsDigit = tmpVal % 10; 

         System.out.println("The value in the thousands place is: " + thousandsDigit);
      }
   }
}