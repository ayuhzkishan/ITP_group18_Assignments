#include <iostream>
using namespace std;
int main(){
    float a,b,c;cout<<"Enter the 3 sides of the triangle:"<<endl;cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"The triangle can be constructed with the given sides."<<endl;
        if(a==b==c){
            cout<<"The triangle is equilateral."<<endl;
        }else if(a==b || b==c || c==a){
            cout<<"The triangle is isosceles."<<endl;
        }else{
            cout<<"The triangle is scalene."<<endl;
        }
    }else{
        cout<<"The triangle cannot be constructed with the given sides."<<endl;
    }
    return 0;
}