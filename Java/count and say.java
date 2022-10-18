class Solution {
    public String countAndSay(int n) {
        if(n==1)
            return "1";
        String res=countAndSay(n-1);
        StringBuilder ans = new StringBuilder();
        int l=0,r=0;
        while(r<res.length()){
            int c=0;
            while(r<res.length() && res.charAt(l)==res.charAt(r)){
                c++;r++;
            }
            ans.append(c);
            ans.append(res.charAt(l));
            l=r;
        }
        return ans.toString();
    }
}