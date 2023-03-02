import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      String inputMonth;
      int inputDay;

      inputMonth = scnr.next();
      inputDay = scnr.nextInt();

      scnr.close();
      inputMonth = inputMonth.toLowerCase();
      String season = "";
      switch (inputMonth) {
         case "january":
         case "february":
            if (inputDay <= 0) {
               season = "Invalid";
               break;
            } else if (inputDay > 31) {
               season = "Invalid";
               break;
            }
            season = "Winter";
            break;
         case "march":
            if (inputDay <= 19) {
               season = "Winter";
            } else {
               season = "Spring";
            }
            break;
         case "april":
         case "may":
            season = "Spring";
            break;
         case "june":
            if (inputDay <= 20) {
               season = "Spring";
            } else {
               season = "Summer";
            }
            break;
         case "july":
         case "august":
            season = "Summer";
            break;
         case "september":
            if (inputDay >= 31) {
               season = "Invalid";
               break;
            }
            if (inputDay <= 21) {
               season = "Summer";
            } else {
               season = "Autumn";
            }
            break;
         case "october":
         case "november":
            season = "Autumn";
            break;
         case "december":
            if (inputDay <= 0) {
               season = "Invalid";
               break;
            }
            if (inputDay <= 20) {
               season = "Autumn";
            } else {
               season = "Winter";
            }
            break;
         default:
            season = "Invalid";
            break;
      }
      System.out.println(season);

   }
}
