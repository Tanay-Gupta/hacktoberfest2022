import java.util.ArrayList;

public class RatMazeProblem {

    // method to check the isSafe to visted there or not
    //condition to check 
    // 1. first the coordinates should be inside the array
    //2. the value should be 1;
    //3. the coordinates should not be visited 
    static boolean isSafe(int x, int y, boolean visited[][],int m[][]){
        
        if((x>=0 && x<m.length) && (y>=0 && y<m[0].length) && m[x][y]==1&& !visited[x][y]){
            return true;
        }else{
            return false;
        }
    } 

    static void solve(int m[][],String out ,ArrayList<String>ans,boolean visited[][],int coorx , int coory){
        
        //first check the base condition
        if(coorx==m.length-1 && coory==m[0].length-1){
            
            ans.add(out);
            return;
        }
        //first marked coordinates visited
        visited[coorx][coory]=true;

        //now DOWN,LEFT,RIGHT,UP move condition
       //first for down
       int x = coorx+1;
        int y=coory;
        if(isSafe(x,y,visited,m)){
            out+="D";
            // System.out.println(out);
        solve(m,out,ans,visited,x,y);
        
        out=out.substring(0,out.length()-1);

        }
        x = coorx;
        y=coory-1;
        //left move
        if(isSafe(x,y,visited,m)){
            out+="L";
            // System.out.println(out);
            solve(m, out, ans, visited, x, y);
           
            out=out.substring(0,out.length()-1);
        }
        x = coorx;
        y=coory+1;
        //rightmove
        if(isSafe(x,y,visited,m)){
            out+="R";
            // System.out.println(out);
            solve(m, out, ans, visited, x, y);
           
            out=out.substring(0,out.length()-1);
        }
        x = coorx-1;
        y=coory;
          //up move
          if(isSafe(x,y,visited,m)){
            out+="U";
            // System.out.println(out);
            solve(m, out, ans, visited, x, y);
            
            out=out.substring(0,out.length()-1);
        }
        visited[coorx][coory]=false;


    }

    public static void main(String[] args) {
        int m[][] = new int[][]{{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
        ArrayList<String> ans= new ArrayList<>();
        String out =new String();
        boolean visited[][] = new boolean[m.length][m[0].length];
        //edge case
        if(m[0][0]==0){
            return ;
        }
        //initial corrdinates
        int coorx=0;
        int coory=0;

        solve(m,out,ans,visited,coorx ,coory);

        //print
        System.out.println(ans);

    }
    
}
