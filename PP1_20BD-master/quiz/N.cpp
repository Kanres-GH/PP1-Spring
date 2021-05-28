#include <iostream>
using namespace std;
int a,c;
char b,b1;
int main()
{
    cin >> a >> b >> c;
    if(b=='/')
    {
        cout << a << " / " << c << " = " << a/c;
        return 0;
    }
    if(b=='+')
    {
        cout << a << " + " << c << " = " << a+c;
    }
    if(b=='-')
    {
        cout << a << " - " << c << " = " << a-c;
    } 
    if(b=='*')
    {
        cout << a << " * " << c << " = " << a*c;
    } 
}