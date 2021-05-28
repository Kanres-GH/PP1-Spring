#include <bits/stdc++.h>
using namespace std;
string s;
int cnt,mx=-1;
void ans(string s)
{
    if(s.size()==0)
    {
        cout << mx;
        return;
    }
    if((s[s.size()-1]-48)>mx)
    {
        mx=s[s.size()-1]-48;
    }
    s.erase(s.size()-1);
    ans(s);
}
int main()
{
    cin >> s;
    ans(s);
}