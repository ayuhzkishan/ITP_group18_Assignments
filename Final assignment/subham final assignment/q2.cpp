#include <iostream>
using namespace std;
int main()
 {
    string str;
    int a = 0, d = 0, sp = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) 
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            a++;
        }
        else if (ch >= '0' && ch <= '9') 
        {
            d++;
        }
        else 
        {
            sp++;
        }
    }
    cout << "Alphabets: " << a << endl;
    cout << "Digits: " << d << endl;
    cout << "Special Characters: " << sp << endl;
    return 0;
}