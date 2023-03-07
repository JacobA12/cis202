import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      char userInput = scnr.next().charAt(0);
      String userInputStr = scnr.nextLine();

      scnr.close();
      int count = 0;
      for (int i = 0; i < userInputStr.length(); i++) {
         if (userInputStr.charAt(i) == userInput) {
            count++;
         }
      }
      if (count != 1) {
         System.out.println(count + " " + userInput + "'s");
      } else {
         System.out.println(count + " " + userInput);
      }
   }
}
