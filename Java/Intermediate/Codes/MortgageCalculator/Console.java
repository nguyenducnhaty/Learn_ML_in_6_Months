import java.util.Scanner;

public class Console {

    // Declare scanner as a private since its being used in the two methods:
    private static Scanner scanner = new Scanner(System.in);

    // Overloading Example
    public static double readNumber(String prompt) {
	    return scanner.nextDouble();
    }

	public static double readNumber(String prompt, double min, double max) {
	    double value;
	    while (true) {
	        System.out.print(prompt);
	        value = scanner.nextDouble();
	        if (value >= min && value <= max)
	            break;
	        System.out.println("Enter a value between " + min + " and " + max);
	    }
	    return value;
	}

}
