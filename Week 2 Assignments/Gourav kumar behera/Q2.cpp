#include <iostream>
using namespace std;
void sort(int arr[], int l) 
{
    for (int i = 0; i < l - 1; i++) 
    {
        for (int j = 0; j < l - i - 1; j++)
         {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
 {
    int l;
    cout << "enter size of array"<<endl;
    cin>>l;
    int arr[l];
    for (int i = 0; i < l; i++)
    cin >> arr[i];
    cout << "Original array: ";
    for (int i = 0; i < l; i++)
    cout << arr[i] << " ";
cout << endl;
sort(arr, l);
    cout << "Sorted array: ";
    for (int i = 0; i < l; i++)
    cout << arr[i] << " ";
cout << endl;
}
