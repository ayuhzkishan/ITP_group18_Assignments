#include<iostream>
using namespace std;
int max(int a[],int l,int s)
{
    int c=0;
    int e=a[s];
    for(int i=0;i<l;i++)
    {
        if(e==a[i])
        c++;
    }
    return c;
}
int main()
{
    int l;
    cout <<"enter size of array"<<endl;
    cin >>l;
    int a[l];
    cout <<"enter elements of array"<<endl;
    for(int i=0;i<l;i++)
    {
        cin >>a[i];
    }
    int m=a[0];
    for(int i=0;i<l;i++)
    {
        if(m<max(a,l,i))
        m=a[i];
    }
    cout <<"maximum occuring integer in the array:"<<m;
}