import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      String userString = scnr.nextLine();
      String reverseString = "";
      while (!userString.equalsIgnoreCase("done") && !userString.equalsIgnoreCase("d")) {
         for (int i = userString.length() - 1; i >= 0; i--) {
            reverseString += userString.charAt(i);
         }
         System.out.println(reverseString);
         userString = scnr.nextLine();
         reverseString = "";
      }
      scnr.close();
   }
}
