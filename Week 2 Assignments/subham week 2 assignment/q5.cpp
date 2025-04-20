#include <iostream>
using namespace std;
int main()
{
    int a,temp,i;
    cout << "Enter the number of elements: ";
    cin >> a;
    int arr[a];
    cout << "Enter the elements: \n";
    for (i=0; i<a;i++)
    {
        cin >> arr[i];
    }
int k=a;
    for (int j=0;j<a-1;j++)
{
for (i=0;i<k-1;i++)
{
    if (arr[i]>arr[i+1])
    {
        temp = arr[i];
        arr [i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}k--;}
cout << "Second smallest element is:"<< arr[1] << endl;
return 0;
}