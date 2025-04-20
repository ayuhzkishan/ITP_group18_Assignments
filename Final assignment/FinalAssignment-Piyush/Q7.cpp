#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;cout<<"Enter a string:"<<endl;cin>>s;
    char x;cout<<"Enter a character which you want to remove from the string:"<<endl;cin>>x;
    for(int i=0;i<s.length();){
        if(s[i]==x){
            s.erase(i,1);
        }else{
            i++;
        }
    }
    cout<<"The new string is: "<<s<<endl;
    return 0;
}