/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader()
		{
			br = new BufferedReader(
				new InputStreamReader(System.in));
		}

		String next()
		{
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				}
				catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() { return Integer.parseInt(next()); }

		long nextLong() { return Long.parseLong(next()); }

		double nextDouble()
		{
			return Double.parseDouble(next());
		}

		String nextLine()
		{
			String str = "";
			try {
				str = br.readLine();
			}
			catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}
    
    
	public static void main (String[] args) throws java.lang.Exception
	{
	    try{
	FastReader sc = new FastReader();
	 int T=sc.nextInt();
	 while(T-->0)
	 {
	     
	     int n=sc.nextInt();
	     
	     ArrayList<Integer> arC=new ArrayList<>();
	     int i,j;
	     for(i=0;i<n;i++)
	     arC.add(sc.nextInt());
	     ArrayList<Integer> arA=new ArrayList<>();
	     ArrayList<Integer> arB=new ArrayList<>();
	     if(arC.get(0)>arC.get((n/2)))
	    System.out.println(-1);
	     if(n%2==0)
	     {
	         i=0;
	     j=i+(n/2);
	     
	     while(i<n/2&&j<n)
	     {
	         if(arC.get(i)<arC.get(j))
	         arA.add(arC.get(i++));
	         else
	         arB.add(arC.get(j++));
	     }
	      while(i<n/2)
	     {
            arA.add(arC.get(i++));
	     }
	     while(j<n)
	    {
	       arB.add(arC.get(j++)); 
	    } 
	     }//end of even conditon
	     else
	     {
	           i=0;
	     j=i+(n/2)+1;
	     
	     while(i<((n/2)+1)&&j<n)
	     {
	         if(arC.get(i)<arC.get(j))
	         arA.add(arC.get(i++));
	         else
	         arB.add(arC.get(j++));
	     }
	      while(i<((n/2)+1))
	     {
            arA.add(arC.get(i++));
	     }
	     while(j<n)
	    {
	       arB.add(arC.get(j++)); 
	    } 
	     }//end of else
	     
	     int l1=arA.size();
	     int l2=arB.size();
	     if(l1==0||l2==0)
	     System.out.println(-1);
	     else
	     {
	         System.out.println(l1);
	         for(i=0;i<arA.size();i++)
	         System.out.print(arA.get(i)+" ");
	         System.out.println("\n"+l1);
	         for(i=0;i<arB.size();i++)
	         System.out.print(arB.get(i)+" ");
	         System.out.println();
	         
	         
	     }
	    
	       
	     
	     
	 }
	 }
	 catch(Exception e)
	{return;
	}
	}
}
