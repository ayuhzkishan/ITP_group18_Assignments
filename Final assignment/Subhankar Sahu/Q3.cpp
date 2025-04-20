#include <iostream>
using namespace std;
int main()
 {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);
   for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            result += ch;
        }
    }
    cout << "Result String is: " << result << endl;
    return 0;
}
