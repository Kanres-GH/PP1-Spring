#include <bits/stdc++.h>
using namespace std;
int small,big;
string s,t;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]!=s[s.size()-1-i])
       {
           cout << "NO";
           return 0;
       }
       
    }
    cout << "YES";
}