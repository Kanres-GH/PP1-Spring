#include <bits/stdc++.h>
using namespace std;
char c;
int main()
{
    cin >> c;
    if(c>='a' && c<='z')
    {
        c-=32;
        cout << c;
    }
    else
    {
        cout << c;
    }
    
}