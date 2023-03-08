import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double loanAmount = scnr.nextDouble();
      double paymentAmount = scnr.nextDouble();
      double interestRate = scnr.nextDouble();
      int count = 0;

      while (loanAmount > 0) {
         double interestAmount = loanAmount * interestRate;

         loanAmount += interestAmount;
         loanAmount -= paymentAmount;
         count++;
      }
      if (count == 1) {
         System.out.println(count + " payment");
      } else {
         System.out.println(count + " payments");
      }

   }
}
