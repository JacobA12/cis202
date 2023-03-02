import java.util.Scanner;
import java.lang.Math;

public class LabProgram {
   public static void main(String[] args) {
    try (Scanner scnr = new Scanner(System.in)) {
      double freqOne;
       double r; 
       double nextFreq;

       freqOne = scnr.nextDouble();
       r = Math.pow(2.0, 1.0 / 12.0);

       nextFreq = freqOne;
       System.out.printf("%.2f ", nextFreq);

       nextFreq = freqOne * r;
       System.out.printf("%.2f ", nextFreq);
       
       nextFreq = freqOne * r * r;
       System.out.printf("%.2f ", nextFreq);
       
       nextFreq = freqOne * r * r * r;
       System.out.printf("%.2f ", nextFreq);
       
       nextFreq = freqOne * r * r * r * r;
       System.out.printf("%.2f\n", nextFreq);
   }



   }
}
