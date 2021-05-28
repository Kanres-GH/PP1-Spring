#include <bits/stdc++.h>
using namespace std;
int n,cnt;
string s, t;
void uppertolower(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }
}
bool check(string &s,string &t)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            if((s[i]=='p' && t[i]=='b') || (s[i]=='b' && t[i]=='p'))
            {
            }
            else if((s[i]=='i' && t[i]=='e') || (s[i]=='e' && t[i]=='i'))
            {
            }
            else
            {
                return false;
            }
            
        }
    }
    return true;
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> s >> t;
        if(s.size()!=t.size())
        {
            cout << "No\n";
            continue;
        }
        uppertolower(s);uppertolower(t);
        if(check(s,t))
        {
            cout << "Yes\n";
        }  
        else
        {
            cout << "No\n";
        }   
    }
}