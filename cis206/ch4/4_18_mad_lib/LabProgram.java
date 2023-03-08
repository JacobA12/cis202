import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      String userInput = scnr.next();
      int userNum = scnr.nextInt();
      
      while (!userInput.equalsIgnoreCase("done")){
         System.out.println("Eating " + userNum + " " + userInput + " a day keeps you happy and healthy.");
         userInput = scnr.next();
         userNum = scnr.nextInt();
      }

    }
}
