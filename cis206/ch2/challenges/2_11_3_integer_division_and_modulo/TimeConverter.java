/* 
    Convert totalSeconds to hours, minutes, and seconds, finding the maximum number of hours, then minutes, then seconds.

    Ex: If the input is 14464, then the output is:

    Hours: 4
    Minutes: 1
    Seconds: 4
    Note: An hour has 3600 seconds. A minute has 60 seconds.
 */
import java.util.Scanner;
 
public class TimeConverter {
   public static void main(String[] args) {
      try (Scanner scnr = new Scanner(System.in)) {
        int totalSeconds;
          int numHours;
          int numMinutes;
          int numSeconds;
 
          totalSeconds = scnr.nextInt();

          /* Your code goes here */
          numHours = totalSeconds / 3600;
          numMinutes = (totalSeconds % 3600) / 60;
          numSeconds = (totalSeconds % 3600) % 60;
         
          System.out.println("Hours: " + numHours);
          System.out.println("Minutes: " + numMinutes);
          System.out.println("Seconds: " + numSeconds);
    }
   }
}