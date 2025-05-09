#include <iostream>
using namespace std;
int partiton(int arr[],int start,int mid,int end){
    int pivot=arr[mid];
    int temp=pivot;arr[mid]=arr[end];arr[end]=temp;
    int i=start-1;int position=start;
    while(position<end){
        if(arr[position]<=pivot){
            i++;
            int temp1=arr[position];arr[position]=arr[i];arr[i]=temp1;
        }
        position++;
    }
    int x=i+1;int temp2=arr[x];arr[x]=arr[end];arr[end]=temp2;
    return x;
}
void sortArray(int arr[],int start,int end){
    int mid=(start+end)/2;
    if(start<end){
        int index=partiton(arr,start,mid,end);
        sortArray(arr,start,index-1);
        sortArray(arr,index+1,end);
    }
}
int main(){
    int n;cout<<"Enter the number of elements to be there in the array:"<<endl;cin>>n;
    int arr[n];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(arr,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
