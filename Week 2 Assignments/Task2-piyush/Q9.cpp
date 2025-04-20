#include <iostream>
using namespace std;
void printArray(int arr[],int index,int size){
    if(index==size){
        return;
    }else{
        cout<<arr[index]<<" ";
        printArray(arr,index+1,size);
    }
}
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,0,n);
    return 0;
}