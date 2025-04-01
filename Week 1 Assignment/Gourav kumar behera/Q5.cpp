#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if(n==0||n==1)
    cout << n << " is perfect square";
    else if(n==2||n==3)
    cout << n << " is not perfect square";
    else
    {
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
       
        if(i*i==n)
        {
            c=1;
            break;
        }
        if(i*i<n)
        continue;
        if(i*i>n)
        {
            break;
        }
    }
    if(c==0)
    cout << n << " is not perfect square";
    else
    cout << n << " is perfect square";
    }
}