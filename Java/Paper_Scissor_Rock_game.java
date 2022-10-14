import java.util.*;

class Paper_Scissor_Rock_game
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1 for Scissor");
        System.out.println("Enter 2 for Paper");
        System.out.println("Enter 0 for Rock");
        while(true)
        {

            System.out.println("Enter your number");
            int n=sc.nextInt();
            int random=(int)(Math.random()*3);
        System.out.println("Number entered by computer is "+random);
        if(n==1)
        {
            if(random==2)
            {
                System.out.println("You Won");
            }
            else if(random==0)
            {
                System.out.println("Computer Won");
            }
            else 
            {
                System.out.println("Match Tie");
            }
        }
        else if(n==2)
        {
            if(random==0)
            {
                System.out.println("You Won");
           }
           else if(random==1)
           {
               System.out.println("Computer Won");
            }
            else 
            {
                System.out.println("Match Tie");
            }
        }
        else if(n==0)
        {
            if(random==1)
            {
                System.out.println("You Won");
            }
            else if(random==2)
            {
                System.out.println("Computer Won");
            }
            else 
            {
                System.out.println("Match Tie");
            }
        }
    }
    }
}