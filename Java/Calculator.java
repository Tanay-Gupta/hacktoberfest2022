import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double value;
        System.out.print("Please select the operator(+,-,*,/) : ");
        char operator1 = sc.next().charAt(0);

        System.out.print("Enter number 1 : ");
        double num1 = sc.nextDouble();
        System.out.print("Enter number 2 : ");
        double num2 = sc.nextDouble();

        switch (operator1){
            case '+':
                value = num1+num2;
                System.out.println("num1 + num2 value is " + value);
                break;
            case '-':
                value = num1-num2;
                System.out.println("num1 - num2 value is " + value);
                break;
            case '*':
                value = num1*num2;
                System.out.println("num1 * num2 value is " + value);
                break;
            case '/':
                value = num1/num2;
                System.out.println("num1 / num2 value is " + value);
                break;
            default:
                System.out.println("Invalid input! Please try again.");
                break;
        }
    }
}
