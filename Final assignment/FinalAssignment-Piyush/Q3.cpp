#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s;cout<<"Enter a string:"<<endl;cin>>s;
    for(int i=0;i<s.length();){
        if(!(isalpha(s[i]))){
            s.erase(i,1);
        }else{
            i++;
        }
    }
    cout<<"The required string is "<<s<<endl;
    return 0;
}