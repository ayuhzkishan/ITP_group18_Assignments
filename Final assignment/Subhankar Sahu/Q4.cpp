#include <iostream>
using namespace std;
int main() 
{
    int n, k,i;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> k;
    k = k % n;
    int rotated[n];
    for (i = 0; i < n; i++)
     {
        rotated[(i + k) % n] = arr[i];
    }

    cout << "Array after rotating right by " << k << " positions:\n";
    for (i = 0; i < n; i++) 
    {
        cout << rotated[i] << " ";
    }
    cout << endl;
    return 0;
}
