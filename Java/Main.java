/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a[]={10,20,20,10,30,40,10};
		int k=4;
		int i=0;
		
		HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
		
		for(i=0;i<k;i++)
		{
		    if(map.containsKey(a[i])){
		        map.put(a[i],map.get(a[i])+1);
		    }
		    else
		    {
		        map.put(a[i],1);
		    }
		}
		System.out.println(map.size());
		
		for(i=k;i<a.length;i++)
		{
		    
		    
		    map.put(a[i-k],map.get(a[i-k])-1);
		    if(map.get(a[i-k])==0)
		    map.remove(a[i-k]);
		    
		     if(map.containsKey(a[i])){
		        map.put(a[i],map.get(a[i])+1);
		    }
		    else
		    {
		        map.put(a[i],1);
		    }
		    
		    System.out.println(map.size());
		    
		}
		
		
		
	}
}
