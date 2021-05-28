#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0 && s[i] >='a' && s[i] <='z')
        {
            c=s[i]-' ';
            cout << c;
            continue;
        }
        cout << s[i];
    }
}