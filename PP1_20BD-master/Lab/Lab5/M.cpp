#include <bits/stdc++.h>
using namespace std;
int a[11],cnt,n;
string s,t;
char c;
int main()
{
    cin >> s >> c >> n;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            cnt++;
        }
    }
    if(cnt == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}