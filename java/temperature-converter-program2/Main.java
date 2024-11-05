import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		float tempC, tempF;
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter a temp in C: ");
		tempC = scan.nextFloat();

		tempF = celsiusToFahrenheit(tempC);

		System.out.println("Temp in F is: " + tempF);
	}

    static float celsiusToFahrenheit(float celsius) {
		return (celsius * (9.0f/5.0f)) + 32.0f;
	}
}