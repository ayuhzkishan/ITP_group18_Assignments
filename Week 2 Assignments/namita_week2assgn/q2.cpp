#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cout <<"Enter the size of the 1st array"<<endl;
    cin >> n;
    int a[n];
    cout <<"Enter the elements of the 1st array" <<endl;
    for(i=0;i<n;i++)
    cin >>a[i];
    cout <<"The elements of the 1st array" <<endl;
    for(i=0;i<n;i++)
    cout <<a[i] <<" ";
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
           if(a[j]>a[j+1]){
         temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;}
        }
    }
    cout<< endl <<"The elements of the sorted array" <<endl;
    for(i=0;i<n;i++)
    cout <<a[i] <<" ";
}