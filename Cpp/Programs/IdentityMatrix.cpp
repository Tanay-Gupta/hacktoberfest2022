

#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cout << "Enter number of rows:";
	cin >> row;
	cout << "Enter number of columns:";
	cin >> col;
	int** a = new int* [row];
	for (int i = 0; i < row; i++)
		a[i] = new int[col];
	cout << "Enter numbers in array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> a[i][j];
    }
    cout << "Entered array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << a[i][j];
        cout << endl;
    }

    int  diag = 1;
    int  nonDiag = 1;

    for (int i = 0; i < row; i++)
    {
        if (a[i][i] != 1)
            diag = 0;
    }

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            if (a[i][j] != 0)
                nonDiag = 0;
        }
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] != 0)
                nonDiag = 0;
        }
    }

	if (diag && nonDiag)
		cout << "Identity matrix" << endl;
	else
		cout << "Not an Identity matrix" << endl;

	for (int i = 0; i < row; i++)
		delete[] a[i];
	delete[]a;
	a = NULL;
}
