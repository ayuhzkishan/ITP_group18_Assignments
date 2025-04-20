#include <iostream>
using namespace std;

int pri(int ar[],int n, int j) 
{
    if (n == j)
        return 0; 
        cout << ar[n] << " ";
        pri(ar, n + 1, j);
}
int main()
 {
    int n,i;
    cout << "Enter size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for ( i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "The elements of the array are:" << endl;
    pri(arr,0,i);
    return 0;
}