#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter the three sides of a triangle";
   cin >> a >> b >> c;
   cout << a<<endl<< b<<endl<< c<<endl;
   if(a+b>c && b+c>a && c+a>b){
     if(a==b && b==c)
     cout <<"equilateral triangle" <<endl;
     else if(a==b || b==c ||c==a)
     cout <<"isosceles triangle"<<endl;
     else
     cout <<"scalene"<< endl;
   }
   else
   cout <<"Triangle formation is not possible";
}
