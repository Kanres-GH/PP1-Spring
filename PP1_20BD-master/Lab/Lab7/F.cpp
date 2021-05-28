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
    if((s[s.size()-1]-48)%2==0)
    {
       cnt++; 
    }
    s.erase(s.size()-1);
    ans(s);
}
int main()
{
    cin >> s;
    ans(s);
}