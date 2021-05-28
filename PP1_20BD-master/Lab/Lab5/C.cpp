#include <bits/stdc++.h>
using namespace std;
int small,big;
string s,t;
int main()
{
    cin >> s >> t;
    for(int i=0;i<s.size();i++)
    {
       if(s.substr(i,t.size())==t)
       {
           cout << "YES";
           return 0;
       }
    }
    cout << "NO";
}