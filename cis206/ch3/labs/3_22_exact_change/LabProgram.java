import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner sc = new Scanner(System.in);
      int totalChange = sc.nextInt();
      sc.close();

      if (totalChange == 0) {
         System.out.println("No change");
      } else {
         int dollars = 0;
         int quarters = 0;
         int dimes = 0;
         int nickels = 0;
         int pennies = 0;

         while (totalChange > 0) {
            if (totalChange >= 100) {
               dollars++;
               totalChange -= 100;
            } else if (totalChange >= 25) {
               quarters++;
               totalChange -= 25;
            } else if (totalChange >= 10) {
               dimes++;
               totalChange -= 10;
            } else if (totalChange >= 5) {
               nickels++;
               totalChange -= 5;
            } else {
               pennies++;
               totalChange -= 1;
            }
         }

         if (dollars > 0) {
            System.out.println(dollars + " Dollar" + (dollars > 1 ? "s" : ""));
         }
         if (quarters > 0) {
            System.out.println(quarters + " Quarter" + (quarters > 1 ? "s" : ""));
         }
         if (dimes > 0) {
            System.out.println(dimes + " Dime" + (dimes > 1 ? "s" : ""));
         }
         if (nickels > 0) {
            System.out.println(nickels + " Nickel" + (nickels > 1 ? "s" : ""));
         }
         if (pennies > 0) {
            System.out.println(pennies + " Penn" + (pennies > 1 ? "ies" : "y"));
         }

      }
   }
}