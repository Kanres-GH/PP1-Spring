#include <bits/stdc++.h>
using namespace std;
int a[11],cnt,n;
string s,t;
char c;
int main()
{
    cin >> s;
    c=s[0];
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]>c)
        {
            c=s[i];
        }
    }
    cout << c;
}