#include <bits/stdc++.h>
using namespace std;
string s,s1,ans,ans1;
int main()
{
    cin >> s >> s1;
    if(s.size()> s1.size())
    {
        for(int i=1;i<=s1.size();i++)
        {
            if(s.substr(s.size()-i,i)==s1.substr(0,i))
            {
                ans =  s+s1.substr(i,s1.size()-i);
            }
        }
        for(int i=1;i<=s1.size();i++)
        {
            if(s1.substr(s1.size()-i,i)==s.substr(0,i))
            {
                ans1 =  s1+s.substr(i,s.size()-i);
            }
        }
    }
    else
    {
        for(int i=1;i<=s.size();i++)
        {
            if(s.substr(s.size()-i,i)==s1.substr(0,i))
            {
                ans =  s+s1.substr(i,s1.size()-i);
            }
        }
        for(int i=1;i<=s.size();i++)
        {
            if(s1.substr(s1.size()-i,i)==s.substr(0,i))
            {
                ans1 =  s1+s.substr(i,s.size()-i);
            }
        }
    }
    if(ans.size() == 0 && ans1.size()==0)
    {
        cout << s << s1;
        return 0;
    }
    if(ans.size()==0)
    {
        cout << ans1;
        return 0;
    }
    if(ans1.size()==0)
    {
        cout << ans;
        return 0;
    }
    cout << min(ans,ans1);
}