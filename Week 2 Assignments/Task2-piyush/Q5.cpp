#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];int index=0;
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];index=i;
        }
    }
    int min2=arr[0];
    for(int i=1;i<n;i++){
        if(i==index){
            continue;
        }else{
            if(min2>min && min2>arr[i]){
                min2=arr[i];
            }
        }
    }
    cout<<"The second smallest element in the array is "<<min2;
    return 0;
}