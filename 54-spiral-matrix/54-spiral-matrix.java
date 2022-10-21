class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int i = 0, j = 0, k = 0, l = 0;
        List<Integer> ls = new ArrayList<>();
        int m = matrix.length;
        int n = matrix[0].length;
        j = m-1;
        l = n-1;
        while(i<=j && k<=l){
            for(int a = k;a<=l;a++){
                ls.add(matrix[i][a]);
            }
            i++;
            for(int a = i;a<=j;a++){
                ls.add(matrix[a][l]);
            }
            l--;
            if (i <= j){
                for(int a = l;a>=k;a--){
                    ls.add(matrix[j][a]);
                }
            }
            j--;
            if (k <= l){
                for(int a = j;a>=i;a--){
                    ls.add(matrix[a][k]);
                }
            }
            k++;
        }
        return ls;
    }
    
}