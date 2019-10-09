package Java.Basics.Codes;

import java.util.Scanner;

public class Fizzbuzz {

    /*
    Takes in a Number: if the number is divisible by 5 you get "Fizz"
    If the number is divisible by 3 you get "Buzz"
    If the number is divisible by both 3 and 5 you get "FizzBuzz"
    If the number isn't divisible by any you get the number that you input
    */

    public static void main(String[] args) {
        // Read in the number from terminal using Scanner
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please Input a Number: ");
        int number = scanner.nextInt();

        if (number % 5 == 0) {
            String out = (number % 3 == 0) ? "FizzBuzz" : "Fizz";
            System.out.println(out);
        }
        else if (number % 3 == 0) {
            System.out.println("Buzz");
        }
        else {
            System.out.print(number);
        }

        scanner.close();
    }
}
