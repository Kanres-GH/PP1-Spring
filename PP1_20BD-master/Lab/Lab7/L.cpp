#include <bits/stdc++.h>
using namespace std;
string s;
void ans(string s)
{
    if(s[0]==s[s.size()-1])
    {
        s.erase(0);
        if(s.size()==0)
        {
            cout << "Yes";
            return;
        }
        s.erase(s.size()-1);
        ans(s);
        cout << "Yes";
        return;
    }
    else
    {
        cout << "No";
        return;
    }
    
}
int main()
{
    cin >> s;
    ans(s);
}