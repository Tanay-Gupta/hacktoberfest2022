import java.util.Scanner;

class Fibonacci {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a no.:");
        int n = sc.nextInt();
        int num = n;
        int a = 0, b = 1;
        // String s ="";
        System.out.print(a + " ");
        System.out.print(b + " ");
        while ((n - 2) > 0) {

            int c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;

            n--;

        }

    }

}
