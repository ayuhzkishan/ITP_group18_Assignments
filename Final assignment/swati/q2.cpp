#include <iostream>
using namespace std;

int main() {
    string s = "Abc123@#";
    int a = 0, d = 0, sp = 0;
    for (char c : s) {
        if(isalpha(c)) a++;
        else if(isdigit(c)) d++;
        else sp++;
    }
    cout << a << " " << d << " " << sp;
}