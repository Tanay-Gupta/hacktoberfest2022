class ArgumentsParameters{
    public void add (int i, int j){
System.out.println("The sum is: "+(i+j)); // parameters
    }
    public static void main(String args[]){
        Main obj=new Main();
        obj.add(1,2); // arguments
    }
}