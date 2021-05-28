#include <bits/stdc++.h>
using namespace std;
int ans;
string s;
int sum(string s)
{
    for(int i=0;i<s.size();i++)
    {
        ans+=s[i]-48;
    }
    cout << ans;
}
int main()
{
    cin >> s;
    sum(s);
}