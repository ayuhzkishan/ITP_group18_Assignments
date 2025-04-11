#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],t1[3][3],t2[3][3];
    cout <<"enter elements of 1st 2D array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >>a[i][j];
        }
    }
    cout <<"enter elements of 2st 2D array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >>b[i][j];
        }
    }
    cout <<"sum of 2 given matrices"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int s=a[i][j]+b[i][j];
            cout <<s<<" ";
        }
        cout<<endl;
    }
    cout <<"transpose of 1st matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t1[i][j]=a[j][i];
            cout<<t1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"transpose of 2st matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t2[i][j]=b[j][i];
            cout<<t2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"sum of transposed matrices"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int s=t1[i][j]+t2[i][j];
            cout <<s<<" ";
        }
        cout<<endl;
    }
}