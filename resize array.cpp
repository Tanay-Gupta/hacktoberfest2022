#include<iostream>
using namespace std;
int* resizearray(int arr[], const int SIZE)
{
	int *newarray;
	newarray = new int[SIZE*2];
	for (int i = 0; i < SIZE; i++)
	{
		newarray[i] = arr[i];
	}
	for (int i = SIZE; i < SIZE * 2; i++)
	{
		newarray[i] = arr[i-SIZE]*2;
	}
	return newarray;
	
}
int main()
{
	const int SIZE = 2;
	int arr[SIZE];
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
	
	cout << resizearray(arr, SIZE);
	return 0;

}