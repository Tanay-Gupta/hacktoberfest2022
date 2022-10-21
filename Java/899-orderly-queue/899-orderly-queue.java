import java.util.*;
class Solution {
    
    public String rotate(String s,int l)
    {
        return(s.substring(1,l)+s.charAt(0));
    }
    public String orderlyQueue(String s, int k) {
        
        
        int l=s.length();
       
        
        
        if(k==1)
        {
           
            String sm=s;
            for(int i=0;i<l;i++)
            {
               String  ns=rotate(s,l);
              System.out.println(ns);
                if(ns.compareTo(sm)<0)
                    sm=ns;
                s=ns;
                    
            }
            return(sm);
            
        }
        else
        {
            char ch[]=s.toCharArray();
            
            Arrays.sort(ch);
          
            return(String.valueOf(ch));
        }
        
        
        
        
    }
}