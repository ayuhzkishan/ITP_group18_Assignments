#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter 3 sides of a triangle:";
    cin >>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        if(a==b&&b==c)
        cout << "it is equilateral triangle";
        else if(a==b||b==c||a==c)
        cout << "it is isoceles triangle";
        else
        cout << "it is scalene triangle";
    }
    else
    cout << "triangle cannot be drawn from the given sides";
}