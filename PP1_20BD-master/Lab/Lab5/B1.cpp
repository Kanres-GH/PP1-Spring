#include <bits/stdc++.h>
using namespace std;
int small,big;
string s;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
        cout << s[i];
    }
}