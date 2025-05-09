#include <iostream>
using namespace std;
int printSum(int num,int initialsum){
    if(num==0){
        return initialsum;
    }else{
        if(num>0){
            int dig=num%10;
            initialsum+=dig;
        }else if(num<0){
            int dig=num%(-10);
            initialsum+=dig;
        }
        return printSum(num/10,initialsum);
    }
}
int main(){
    int num;cout<<"Enter a number:"<<endl;cin>>num;int initialsum=0;
    int sum=printSum(num,initialsum);
    cout<<"The sum of the digits of the number is: "<<sum<<endl;
    return 0;
}