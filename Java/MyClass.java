public class MyClass {
    public static void fill(String str, int lps[])
    {
        int l=str.length();
        int i,len=0;
        
        lps[0]=0;
        i=1;
        while(i<l)
        {
            if(str.charAt(i)==str.charAt(len))
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len==0)
                {
                  lps[i]=0;
                i++;  
                }
                else
                {
                    len=lps[len-1];
                }
                
                
            }
        }
    }
    public static void main(String args[]) {
      String s = "ababaa";
      int lps[]=new int[s.length()];
      fill(s,lps);
      
      for(int i=0;i<lps.length;i++)
      System.out.print(lps[i]+" ");
    }
}