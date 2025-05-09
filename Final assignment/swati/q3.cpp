#include <iostream>
using namespace std;

int main() {
    string s = "Ab1@c", r = "";
    for(char c : s)
        if(isalpha(c)) r += c;
    cout << r;
}