public class Binary_Search {
    public static int BinarySearch(int arr[], int key){
        int start =0;
        int end = arr.length-1;
        while(start<=end){
            int mid = (start + end)/2;
            if(arr[mid]== key){
                return mid;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        // int arr[] ={2,4,6,8,10,12,14};
        Scanner sc = new Scanner(System.in);

        //Input
        int arr[]= new int [50];
        System.out.println("Enter Elements of the array");
        for(int i=0;i<arr.length;i++){
            arr[i]= sc.nextInt();
        }
        int key = sc.nextInt;
        System.out.println("Element found on - "+ BinarySearch(arr, key));
    }
}
