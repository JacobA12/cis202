import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);

      int wordCount = sc.nextInt();

      String userWords[] = new String[wordCount];

      int frequencies[] = new int[wordCount];

      for (int i = 0; i < wordCount; i++) {
         String word = sc.next();
         userWords[i] = word;
         frequencies[i] = 1;
         for (int j = 0; j < i; j++) {
            if (userWords[j].equals(word)) {
               frequencies[j]++;
               break;
            }

         }
      }
      for (int i = 0; i < frequencies.length; i++) {
         System.out.println(userWords[i] + " - " + frequencies[i]);
      }
   }
}
