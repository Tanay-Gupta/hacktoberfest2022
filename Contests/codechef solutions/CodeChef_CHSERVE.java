import java.util.*;
 class CHSERVE {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t, k, p, q,res;
		t = input.nextInt();
		while (t-- > 0) {
			res=0;
			p = input.nextInt();
			q = input.nextInt();
			k = input.nextInt();

			if (k % 2 == 0) {
				res = (p + q) / k;
				if (res % 2 == 0)
					System.out.println("CHEF");
				else
					System.out.println("COOK");
			} else {
				res = (p + q) / k;
				if (res % 2 != 0)
					System.out.println("COOK");
				else
					System.out.println("CHEF");
			}

		}
		input.close();
	}
}
