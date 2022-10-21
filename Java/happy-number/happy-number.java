class Solution {
    
    
    public int getsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=(int)Math.pow(n%10,2);
            n=n/10;
        }
       // System.out.print("sum: "+sum);
        return(sum);
    }
    public boolean isHappy(int n) {
        
        
        HashSet<Integer> h=new HashSet<>();
       
        while(n!=1&&h.contains(n)==false)
        {
            h.add(n);
            n=getsum(n);
             //System.out.println("sum: "+n);
            
        }
        if(n==1)
            return(true);
        else
            return(false);
        
    }
}