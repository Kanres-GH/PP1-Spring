#include <bits/stdc++.h>
using namespace std;
int cnt[11],a[11],first;
string s,t;
int main()
{
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}