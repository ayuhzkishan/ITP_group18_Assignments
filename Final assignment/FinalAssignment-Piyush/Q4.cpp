#include <iostream>
using namespace std;
void rotateArray(int arr[],int size,int k){
    if(k==0){
        return;
    }else{
        int temp=arr[size-1];
        for(int i=size-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        rotateArray(arr,size,--k);
    }
}
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cout<<"Enter the number of positions by which the array has to be rotated:"<<endl;cin>>k;
    int length=sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,length,k);
    cout<<"The rotated array:"<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}