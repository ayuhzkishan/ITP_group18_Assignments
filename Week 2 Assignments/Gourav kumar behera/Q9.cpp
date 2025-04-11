#include<iostream>
using namespace std;
void disp(int a[],int l,int i)
{
    if(i!=l)
    {
    cout <<a[i]<<" ";
    i++;
    disp(a,l,i);
    }

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
    int i=0;
    cout<<"elements of array are:"<<endl;
    disp(a,l,i);
}