#include <bits/stdc++.h>
using namespace std;
int cnt[11],a[11],first;
string s,t;
int main()
{
    cin >> s;
    t=s;
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout << "YES";
        return 0;
    }
    if(t.substr(1) == s.substr(0, s.size() - 1))
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}