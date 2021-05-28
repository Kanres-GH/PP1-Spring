#include <bits/stdc++.h>
using namespace std;
int sum,sum1;
string s,b;
int main()
{
    cin >> s >> b;
    if(s.size()!=b.size())
    {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}