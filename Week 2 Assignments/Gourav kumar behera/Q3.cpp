#include<iostream>
using namespace std;
int main()
{
    int l;
    cout <<"enter size of array"<<endl;
    cin >>l;
    int a[l],b[l];
    cout <<"enter elements of array"<<endl;
    for(int i=0;i<l;i++)
    {
        cin >>a[i];
        b[i]=a[i];
    }
    cout <<"new array into which elements of gievn array was copied"<<endl;
    for(int i=0;i<l;i++)
    {
        cout <<b[i]<<" ";
    }
}