import java.util.Scanner;

class Armstrong {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a no.:");
        int n = sc.nextInt();
        int num = n;
        int sum = 0;

        while (n > 0) {

            int digit;

            digit = n % 10;

            sum = sum + (digit * digit * digit);
            System.out.println(sum);

            n = n / 10;

        }
        System.out.println();
        System.out.println(num);
        System.out.println(sum);

        System.out.println();
        if (sum == num)
            System.out.print("Yes ");
        else
            System.out.print("no ");

    }

}
