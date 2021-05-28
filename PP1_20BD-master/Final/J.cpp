#include <bits/stdc++.h>
using namespace std;
int cnt;
string s,t,s2;
int main()
{
    cin >> s >> t;
    s2=s;
    if(s==t)
    {
        cout << 0;
        return 0;
    }
    for(;;)
    {
        s2[0]=s[s.size()-1];
        for(int i =0;i<s.size()-1;i++)
        {
            s2[i+1]=s[i];
        }
        cnt++;
        if(s2==t)
        {
            cout << cnt;
            return 0;
        }
        if(cnt==s.size())
        {
            cout << "Understandable have a nice day";
            return 0;
        }
        s=s2;
    }
}