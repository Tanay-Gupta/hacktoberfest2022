
import java.util.*;
public class Recursion_PrintSubsequenceOfSumK {
public static void main(String[] args)
    {ArrayList<Integer> a = new ArrayList<>();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n=sc.nextInt();
        System.out.println("Enter the array elements");
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter the target sum");
        int target=sc.nextInt();


        fsub(0, a,target,0, arr);
    }
    public static void fsub(int i, ArrayList<Integer> out,int k,int sum, int[] arr) {
        if (i == arr.length)
        {   if(sum==k)
            System.out.println(out);
            return;
        }
        out.add(arr[i]);
        sum+=arr[i];
        fsub(i + 1, out,k,sum, arr);
        sum-=arr[i];
        out.remove(out.size() - 1);
        fsub(i + 1, out,k,sum, arr);
    }


}
