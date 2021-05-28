#include <bits/stdc++.h>
using namespace std;
int cnt[11],a[11],first;
string s,b;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        cnt[s[i]-48]++;
        a[s[i]-48]=cnt[s[i]-48];
    }
    for(int i=0;i<8;i++)
    {
        if(first==0 && a[i]>0)
        {
            first=a[i];
        }
        if(cnt[i]!=first && first!=0 && a[i]!=0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}