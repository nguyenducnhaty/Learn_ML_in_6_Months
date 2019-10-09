package Java.Basics.Codes;

import java.text.NumberFormat;
import java.util.Scanner;


public class Calculator {

    /*
    A mortgage calculator that takes in:
    Principal or the amount of Mortgage you want to get which should be between 1K-1M
    The annual interest rete between 1 and 30
    The period for the loan between 1 and 30 years
    And displays monthly payments as a currency
    */
    // Define Constants:
    final static byte MONTHS_IN_YEAR = 12;
    final static byte PERCENT = 100;

    // Validate Input
    public static double readNumber(String prompt, Scanner scanner, double min, double max) {
        double value;
        while (true) {
            System.out.print(prompt);
            value = scanner.nextDouble();
            if (value >= min && value <= max) break;
            System.out.printf("Enter a number between %d and %d", min, max);
        }
        return value;
    }

    // Prints
    private static void printMethod(String payment) {
        System.out.println("\nMORTGAGE \n----------");
        System.out.println("Monthly Payments: " + payment);
        System.out.println("\nPAYMENT SCHEDULE \n----------------");
    }

    // Calculate the Mortgage monthly payments
    public static double calculateMortgage(float annualInterest, byte loanYears, int principal) {

        float monthlyInterest = annualInterest / (MONTHS_IN_YEAR * PERCENT); // Get the interest per month
        short loanMonths = (short)(loanYears * MONTHS_IN_YEAR); // Get the loan months

        // Calculate using the formula: Mortgage = Principal * ((rate * (1 + rate)^n) / ((1 + rate)^months - 1))
        double monthlyAmount = principal * ((monthlyInterest * (Math.pow((1 + monthlyInterest), loanMonths)))
                                                / (Math.pow((1 + monthlyInterest), loanMonths) - 1));

        return monthlyAmount;
    }

    // Get remaining balance after each payment
    public static void calculateBalance(int principal, float annualInterest, byte loanYears) {

        float monthlyInterest = annualInterest / (MONTHS_IN_YEAR * PERCENT); // Get the interest per month
        short loanMonths = (short)(loanYears * MONTHS_IN_YEAR); // Get the loan months

        double remainingAmount;
        NumberFormat currency = NumberFormat.getCurrencyInstance();

        for (short i = 1; i <= loanMonths; i++) {
            // Calculate using the formula: Principal * [(1 + rate)^n - (1 + rate)^paymentsMade] / [(1 + rate)^n - 1]
            remainingAmount = principal
            * (Math.pow((1 + monthlyInterest), loanMonths) - Math.pow((1 + monthlyInterest), i))
            / (Math.pow((1 + monthlyInterest), loanMonths) - 1);

            System.out.println(currency.format(remainingAmount));
        }
    }

    public static void main(String[] args) {

        // Declare the Scanner class to read input from terminal
        Scanner scanner = new Scanner(System.in);

        // Check if Principal is in between 1K - 1M and Initialize and get Principal mortgage amount
        int principal = (int)(readNumber("Principal ($1K - $1M): ", scanner, 1000, 1_000_000));

        // Check if Annual Interest Rate is in between 1-30 and initialize annualInterest
        float annualInterest = (float)(readNumber("Annual Interest Rate: ", scanner, 1, 30));

        // Check and initialize loanYears
        byte loanYears = (byte)(readNumber("Period (Years): ", scanner, 1, 30));

        // Close the Scanner
        scanner.close();

        // Calculate the Mortgage monthly payment amount
        double monthlyAmount = calculateMortgage(annualInterest, loanYears, principal);

        // Print the Mortgage amount in the Currency Format
        String payment = NumberFormat.getCurrencyInstance().format(monthlyAmount);

        // Prints
        printMethod(payment);

        // Get Remaining Payment Schedule and Print to Terminal
        calculateBalance(principal, annualInterest, loanYears);
    }
}
