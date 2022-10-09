import java.util.Scanner;

class Palindrome {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a no.:");
        int n = sc.nextInt();
        int num = n;
        int rev = 0;

        while (n > 0) {

            int digit;

            digit = n % 10;
            rev = rev * 10 + digit;

            n = n / 10;

        }

        if (num == rev)
            System.out.println("yes");
        else
            System.out.println("no");

    }

}
