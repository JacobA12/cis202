import java.util.Scanner;

public class LabProgram {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            double gasMileage = sc.nextDouble();
            double gasCost = sc.nextDouble();
            
            System.out.printf("%.2f ", (20 / gasMileage) * gasCost);
            System.out.printf("%.2f ", (75 / gasMileage) * gasCost);
            System.out.printf("%.2f ", (500 / gasMileage) * gasCost);
        }
        
    }
}
