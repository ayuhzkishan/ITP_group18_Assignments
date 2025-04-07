#include<iostream>
using namespace std;
void printarray(int arr[], int index,int size){
    if(index>=size) return;
    cout <<arr[index] <<" ";
    return printarray(arr,index+1,size);
}
int main(){
    int n;
    cout <<"Enter the size of the array:";
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin >>a[i];
    printarray(a,0,n);
}