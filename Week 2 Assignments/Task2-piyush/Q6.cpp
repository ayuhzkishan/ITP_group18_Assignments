#include <iostream>
using namespace std;
int main(){
    int arr1[3][3];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[3][3];cout<<"Enter the elements to be there in the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"The matrix with the sum of the elements of the two matrices:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j==2){
                cout<<arr1[i][j]+arr2[i][j]<<endl;
            }else{
                cout<<arr1[i][j]+arr2[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
                continue;
            }else{
                int temp=arr1[i][j];arr1[i][j]=arr1[j][i];arr1[j][i]=temp;
                int temp1=arr2[i][j];arr2[i][j]=arr2[j][i];arr2[j][i]=temp1;
            }
        }
    }
    cout<<"The matrix with the sum of the transpose of the two matrices:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j==2){
                cout<<arr1[i][j]+arr2[i][j]<<endl;
            }
            else{
                cout<<arr1[i][j]+arr2[i][j]<<" ";
            }
        }
    }
    return 0;
}