#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of lines of the pattern:";
    cin >> n;
    int c=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j==n)
            cout <<c++;
            else
            cout <<c++<<"*";
        }
        cout << endl;
    }
}