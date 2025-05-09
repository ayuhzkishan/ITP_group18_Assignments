#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            int temp=arr[index];arr[index]=arr[i];arr[i]=temp;index++;
        }
    }
    cout<<"The converted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}