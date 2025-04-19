#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], newArr[n], newSize = 0;
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) 
    {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++)
         {
            if (arr[i] == newArr[j]) 
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) 
        {
            newArr[newSize++] = arr[i];
        }
    }
    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++)
        cout << newArr[i] << " ";

    return 0;
}
