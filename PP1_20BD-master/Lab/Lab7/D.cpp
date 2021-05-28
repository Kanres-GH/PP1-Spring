#include <bits/stdc++.h>
using namespace std;
int cnt;
string s;
void ans(string s)
{
    if(s.size()==0)
    {
        cout << cnt;
        return;
    }
    cnt+=(s[s.size()-1]-48);
    s.erase(s.size()-1);
    ans(s);
}
int main()
{
    cin >> s;
    //s.erase(s.size()-1);
    ans(s);
}