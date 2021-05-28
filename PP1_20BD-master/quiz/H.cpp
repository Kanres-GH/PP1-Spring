#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a,b,c,d;
string s;
int main()
{
    cin >> a >> b >> c >> d;
    if(abs(c-a)==abs(d-b))
    {
        cout << "Won";
    }
    else
    {
        cout << "Lose";
    }
}