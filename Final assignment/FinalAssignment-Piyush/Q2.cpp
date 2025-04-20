#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main(){
    string s;cout<<"Enter a string:"<<endl;
    cin>>s;
    int count1=0;int count2=0;int count3=0;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            count1++;
        }else if(isdigit(s[i])){
            count2++;
        }else if(!(isalpha(s[i]) && isdigit(s[i]))){
            count3++;
        }
    }
    cout<<"The number of alphabets in the string is: "<<count1<<endl;
    cout<<"The number of digits in the string is: "<<count2<<endl;
    cout<<"The number of special characters in the string is: "<<count3<<endl;
    return 0;
}