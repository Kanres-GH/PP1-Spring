#include <bits/stdc++.h>
using namespace std;
int a[11],cnt;
string s,t;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            cnt++;
        }
    }
    cout << cnt;
}