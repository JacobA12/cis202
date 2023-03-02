import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      try (Scanner scnr = new Scanner(System.in)) {
        String firstName;
          String genericLocation;
          int wholeNumber;
          String pluralNoun;

          firstName = scnr.next();
          genericLocation = scnr.next();
          wholeNumber = scnr.nextInt();
          pluralNoun = scnr.next();

   
          /* Type your code here. */
   
          System.out.println(firstName + " went to " + genericLocation + " to buy " + wholeNumber + " different types of " + pluralNoun + ".");
    }
   }
}
