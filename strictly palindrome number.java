class Solution {
    public boolean isStrictlyPalindromic(int n) {
        for (int i=2;i<=n-2;i++) {
		   String str = Integer.toString(n,i);
		   int j=0,len=str.length()-1;
		   while (j<=len/2) {
			   if (str.charAt(j) != str.charAt(len)) {
				   return false;
			   }
			   j++;
			   len--;
		   }
	   }
		return true;
    }
}