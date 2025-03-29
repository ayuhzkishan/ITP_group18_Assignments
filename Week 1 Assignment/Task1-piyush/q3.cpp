#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter an integer:"<<endl;cin>>n;
    int absn=abs(n);int max=0;
    while(absn){
        if(max<(absn%10)){
            max=(absn%10);
        }
        absn/=10;
    }
    cout<<"The largest digit of the input number is: "<<max<<endl;
    return 0;
}
