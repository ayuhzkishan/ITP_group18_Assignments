#include <iostream>
using namespace std;
int main()
{
    int j,i;
    int arr[3][3], arr1[3][3],sum[3][3],arr11[3][3],arr22[3][3];
    cout << "Enter the elements of first matrix : \n";
    for (i=0; i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        cin >> arr[i][j];
    } cout << endl;
    }
    cout << "Enter the elements of second matrix : \n";
    for (i=0; i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        cin >> arr1[i][j];
        sum[i][j] = arr[i][j] + arr1[i][j];
    } cout << endl;
    }
    cout << "Sum of the two matrix is: \n";
    for (i=0; i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        
        cout << sum[i][j] << " " ;
    } cout << endl;
    }
    for (i=0; i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        arr11[i][j]=arr[j][i];
        arr22[i][j]=arr1[j][i];
        sum[i][j]=arr11[i][j]+arr22[i][j];
    }
    }
cout << " Sum of Transposed matrix is: \n";
for (i=0; i<3;i++)
{
    for (j=0;j<3;j++)
    {
    
    cout << sum[i][j] << " ";
}cout << endl;
   }   return 0;
}