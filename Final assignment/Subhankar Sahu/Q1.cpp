#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], result[n], index = 0,i;
    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++) 
    {
        if (arr[i] < 0)
            result[index++] = arr[i];
    }

    for (i = 0; i < n; i++) 
    {
        if (arr[i] >= 0)
            result[index++] = arr[i];
    }
    cout << "Array after moving negatives to one side:\n";
    for (i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}
