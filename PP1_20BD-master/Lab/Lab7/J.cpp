#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
void ans(string s)
{
    if(s.size()==0)
    {
        cout << cnt;
        return;
    }
    cnt+=(s[s.size()-1]-48)/2;
    s.erase(s.size()-1);
    ans(s);
}
int main()
{
    cin >> s;
    ans(s);
}