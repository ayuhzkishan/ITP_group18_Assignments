#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;int arr[n];
    cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrcpy[n];
    for(int i=0;i<n;i++){
        arrcpy[i]=arr[i];
    }
    cout<<"The copied array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arrcpy[i]<<" ";
    }
    return 0;
}