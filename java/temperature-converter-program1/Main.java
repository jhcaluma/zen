import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		float tempC, tempF;
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter a temp in C: ");
		tempC = scan.nextFloat();

		tempF = (tempC * (9.0f/5.0f)) + 32.0f;

		System.out.println("Temp in F is: " + tempF);
	}
}