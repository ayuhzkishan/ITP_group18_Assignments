#include<iostream>
using namespace std;
void rotatearray(int arr[],int si,int ei){
for(int i=si,j=ei;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
return;
}
int main(){
    int n,k;
    cout <<"Enter the size of the array:" <<endl;
    cin >> n;
    cout <<"Enter the value of k:" <<endl;
    cin >> k;
    cout <<"Enter the elements of the array:" <<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout <<"The array is:" <<endl;
    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    k=k%n;
    rotatearray(arr,0,n-1);
    rotatearray(arr,0,k-1);
    rotatearray(arr,k,n-1);

    cout <<"The  rotated array is:" <<endl;
    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";}
}