#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;cout<<"Enter a string:"<<endl;cin>>s;string scpy=s;
    for(int i=0;i<(s.length()/2);i++){
        char temp=s[i];s[i]=s[s.length()-1-i];s[s.length()-1-i]=temp;
    }
    if(s==scpy){
        cout<<"The string is palindrome!"<<endl;
    }else{
        cout<<"The string is not palindrome."<<endl;
    }
    return 0;
}
