#include<iostream>
using namespace std;
int main()
{
    int l1,l2,c1=0;
    cout <<"enter size of two arrays"<<endl;
    cin >>l1>>l2;
    int a[l1],b[l2],c[l1+l2];
    cout <<"enter elements of 1st arrays"<<endl;
    for(int i=0;i<l1;i++)
    {
        cin >>a[i];
        c[c1++]=a[i];
    }
    cout <<"enter elements of 2nd arrays"<<endl;
    for(int i=0;i<l2;i++)
    {
        cin >>b[i];
        c[c1++]=b[i];
    }
    cout <<"combined array"<<endl;
    for(int i=0;i<l1+l2;i++)
    {
        cout <<c[i]<<" ";
    }
    cout <<endl;
    cout <<"combined array in reverse order"<<endl;
    for(int i=l1+l2-1;i>=0;i--)
    {
        cout <<c[i]<<" ";
    }
}