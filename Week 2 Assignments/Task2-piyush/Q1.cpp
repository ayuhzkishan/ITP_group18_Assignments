#include <iostream>
using namespace std;
int main(){
    int n1;cout<<"Enter the number of integers in the first array:"<<endl;cin>>n1;
    int n2;cout<<"Enter the number of integers in the second array:"<<endl;cin>>n2;
    int arr1[n1];int arr2[n2];
    int arr3[n1+n2];
    cout<<"Enter the elements of the first array:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];arr3[i]=arr1[i];
    }
    cout<<"Enter the elements of the second array:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];arr3[n1+i]=arr2[i];
    }
    for(int i=(n2+n1-1);i>=0;i--){
        cout<<arr3[i]<<" ";
    }
    return 0;
}