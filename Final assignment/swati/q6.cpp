#include <iostream>
using namespace std;

int main() {
    string s = "HeLLo";
    for(char &c : s)
        if(c >= 'A' && c <= 'Z') c += 32;
    cout << s;
}