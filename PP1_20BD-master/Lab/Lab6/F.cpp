#include <bits/stdc++.h>
using namespace std;
int n,cnt;
string s;
int main()
{
    cin >> s >> n;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>47 && s[i]<58)
        {
            cnt++;
        }
    }
    if(cnt>=n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}