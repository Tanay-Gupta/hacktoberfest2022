import java.util.Scanner;

public class Digit_frequency {
   
     public static void main(String[] args) {
                Scanner s = new Scanner(System.in);
		int N = s.nextInt();
                int Digit = s.nextInt();
                
		int frequency = Count(N, Digit);
                System.out.println(frequency);
	}

	public static int Count(int N, int Digit){
           
        int frequency = 0;
        int temp;

       while(N > 0)
        {
            temp = N % 10;
            if( temp == Digit)
            frequency++;
            N = N / 10;
        }
            return frequency;
        }
}
