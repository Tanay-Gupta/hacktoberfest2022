// Java Program to print the lower triangular matrix 
import java.util.*; 
  
public class LowerTriangularMatrix
{ 
    // Print the matrix 
    public static void printMatrix(int[][] arr) 
    { 
        int m = arr.length;   //For Rows
        int n = arr[0].length; //For columns
        for (int i = 0; i < m; i++) 
        { 
            for (int j = 0; j < n; j++) 
            {
                System.out.print(arr[i][j] + " "); 
            }    
            System.out.println(); 
        } 
    } 
    
    //Display the lower triangular matrix
    public static void lowerTriangularMatrix(int arr[][]) 
    { 
        int m = arr.length; 
        int n = arr[0].length; 
        
        if (m != n) 
        { 
            System.out.println("Matrix entered should be a Square Matrix");
            System.out.println("Try Again..");
            return; 
        } 
        else 
        { 
            // looping over the whole matrix 
            for (int i = 0; i < m; i++) 
            { 
                for (int j = 0; j < n; j++) 
                { 
                    if (i < j) 
                    { 
                        arr[i][j] = 0; 
                    } 
                } 
            } 
  
            System.out.println( "Lower Triangular Matrix is : "); 
            
            // printing the lower triangular matrix 
            printMatrix(arr); 
        } 
    } 
    public static void main(String[] args) 
    { 
        //Take input from the user
        Scanner sc=new Scanner(System.in);
        
        int m,n;     //Declare variables for rows and columns
        System.out.println("Enter the number of rows: ");
        m=sc.nextInt();
        
        System.out.println("Enter the number of columns: ");
        n=sc.nextInt();
        
        System.out.println("Enter the Matrix Elements: ");
        int arr[][] = new int[m][n];   //Declare the matrix
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=sc.nextInt();   //Initialize the matrix
            }
        }
        sc.close();
        //Print Original Matrix
        System.out.println( "Original Matrix is : "); 
        printMatrix(arr); 
        
        // calling to display the lower triangular matrix
        lowerTriangularMatrix(arr); 
    } 
}