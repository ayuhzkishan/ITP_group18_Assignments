#include <iostream>
using namespace std;

int main() {
    string s = "madam";
    bool ok = true;
    for(int i = 0; i < s.length()/2; i++)
        if(s[i] != s[s.length()-1-i]) ok = false;
    cout << (ok ? "Palindrome" : "Not Palindrome");
}