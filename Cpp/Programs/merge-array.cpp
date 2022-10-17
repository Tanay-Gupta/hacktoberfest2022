#include <bits/stdc++.h>
#define N 100
using namespace std;
class merge_Array {
public:

    void Merge(int array1[N], int array2[N], int array3[N], int n1, int n2)
    {
        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2)
        {
           
            
            if (array1[i] < array2[j])
            {
                array3[k++] = array1[i++];
            }
          
            else
            {
                array3[k++] = array2[j++];
            }
        }
        while (i < n1)
        {
            array3[k++] = array1[i++];
        }
        while (j < n2)
        {
            array3[k++] = array2[j++];
        }
    }
};

int main()
{
    merge_Array ma;
    int n1, n2, n3;
    int i;
    int A[N], B[N], C[N];
    cout << "Enter the size of First array:\n";
    cin >> n1;
    cout << "\nEnter the elements of First array:\n";
    for (i = 0; i < n1; i++)
        cin >> A[i];
    cout << "\nEnter the size of Second array:\n";
    cin >> n2;
    cout << "\nEnter the elements of Second array:\n";
    for (i = 0; i < n2; i++)
        cin >> B[i];
    sort(A, A + n1);
    sort(B, B + n2);
    cout << "\nElements of First sorted array:\n";
    for (i = 0; i < n1; i++)
        cout << A[i] << " ";
    cout << "\nElements of Second sorted array:\n";
    for (i = 0; i < n2; i++) {
        cout << B[i] << " ";
    }
    ma.Merge(A, B, C, n1, n2);
    cout << "\nElements after Merging Arrays:\n";
    for (i = 0; i < (n1 + n2); i++) {
        cout << C[i] << " ";
    }
    return 0;
}
