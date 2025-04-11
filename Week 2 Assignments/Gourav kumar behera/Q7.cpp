#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cout <<"enter the number of element of fibonacci series that you want"<<endl;
    cin >>n;
    cout<<n<<"th fibonacci number is "<<fibo(n);
}