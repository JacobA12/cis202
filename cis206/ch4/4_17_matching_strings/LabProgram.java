import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      String inputOne = scnr.next();
      String inputTwo = scnr.next();

      scnr.close();
      String smallerString;
      if (inputOne.length() < inputTwo.length()) {
         smallerString = inputOne;
      }else{
         smallerString = inputTwo;
      }

      int count = 0;

      for(int i = 0; i < smallerString.length(); i++){
         if(inputOne.charAt(i) == inputTwo.charAt(i)){
            count++;
         }
      }
      if(count > 1){
         System.out.println(count + " characters match");
      }else if (count == 1){
         System.out.println(count + " character matches");
      }else{
         System.out.println(count + " characters match");
      }
   }
}