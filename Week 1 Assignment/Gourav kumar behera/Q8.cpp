#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of lines of the pattern:";
    cin >> n;
    int a=2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<j;
        }
        for(int j=1;j<=a;j++)
        {
            cout <<" ";
        }
        for(int k=i;k>=1;k--)
        {
            cout <<k;
        }
        a=a-2;
        cout << endl;
    }
}