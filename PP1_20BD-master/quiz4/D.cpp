#include <bits/stdc++.h>
using namespace std;
string s,s1;
int main()
{
    cin >> s >> s1;
    for(int i =0;i<=s.size()-s1.size();i++)
    {
        string c=s.substr(i,s1.size());
        if(c == s1)
        {
            cout << i << " ";
        }
    }
}