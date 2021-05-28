#include <bits/stdc++.h>
using namespace std;
int a[11],cnt,n;
string s,t;
char c;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='z')
        {
            s[i]='a';
            continue;
        }
        s[i]++;
    }
    cout << s;
}