#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;cout<<"Enter a string:"<<endl;cin>>s;
    for(int i=0;i<s.length();i++){
        int code=int(s[i]);
        if(code<91){
            code+=32;
            s[i]=char(code);
        }
    }
    cout<<"The required string is "<<s<<endl;
    return 0;
}