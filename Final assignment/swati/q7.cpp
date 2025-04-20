#include <iostream>
using namespace std;

int main() {
    string s = "hello", r = "";
    char ch = 'l';
    for(char c : s)
        if(c != ch) r += c;
    cout << r;
}