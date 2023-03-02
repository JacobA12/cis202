import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {

		String firstName;
		String lastName;
		int userNum;

		Scanner sc = new Scanner(System.in);

		firstName = sc.next();
		lastName = sc.next();
		userNum = sc.nextInt();

		sc.close();

		String loginName = "";

		if (lastName.length() < 5) {
			loginName = loginName.concat(lastName);
		} else {
			loginName = loginName.concat(lastName.substring(0, 5));
		}

		loginName = loginName + firstName.charAt(0);

		int lastTwoNum = userNum % 100;

		loginName = loginName.concat(String.valueOf(lastTwoNum));

		System.out.println("Your login name: " + loginName);

	}
}