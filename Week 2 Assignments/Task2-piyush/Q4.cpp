#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];arr[j]=arr[i];arr[i]=temp;
            }
        }
    }
    cout<<"The majority element is : "<<arr[n/2]<<endl;
    return 0;
}