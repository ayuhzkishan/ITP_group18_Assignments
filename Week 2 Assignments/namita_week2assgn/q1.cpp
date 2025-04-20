#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout <<"Enter the size of the 1st array"<<endl;
    cin >> n;
    cout <<"Enter the size of the 2nd array" <<endl;
    cin >> m;
    int a[n],b[m],c[m+n];
    cout <<"Enter the elements of the 1st array" <<endl;
    for(i=0;i<n;i++)
    cin >>a[i];
    cout <<"Enter the size of the 2nd array" <<endl;
    for(i=0;i<m;i++)
    cin >>b[i];
    for(i=0;i<n;i++)
    c[i]=a[i];
    for(j=0;j<m;j++)
    c[i+j]=b[j];
    cout <<"The mersed array is" <<endl;
    for(i=0;i<m+n;i++)
    cout <<c[i] <<" ";
    cout <<"The reversed array is" <<endl;
    for(int k=m+n-1;k>=0;k--)
    cout <<c[k]<<endl;
}
