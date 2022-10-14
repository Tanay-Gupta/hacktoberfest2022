#include<iostream>
using namespace std;
void minmax(int i, int j, int* max,int *min, int arr[]) {
    if(i == j) {
        *max = *min = arr[i];
    }
    else if(i == j -1) {
        if(arr[i] < arr[j]) {
            *max = arr[j];
            *min = arr[i];
        }
        else {
            *max = arr[i];
            *min = arr[j];
        }
    }
    else {
        int min1 = 0; int max1 = 0;
        int mid = (i+j)/2;
        minmax(i,mid,&(*max),&(*min),arr);
        minmax(mid+1,j,&max1,&min1,arr);
        if((*max) < max1) {
            *max = max1;
        }
        if((*min) > min1) {
            *min = min1;
        }
    }
}
int main() {
    int arr[10];
    cout<<"Enter 10 elements:\n";
    for(int i =0;i<10;i++) {
        cin >> arr[i];
    }
    int max = 0, min = 0;
    int i = 0,j = 9;
    minmax(i,j,&max,&min,arr);
    cout << "Max is " << max << " and min is " << min << endl;
}
