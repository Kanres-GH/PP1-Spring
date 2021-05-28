#include <bits/stdc++.h>
using namespace std;
string s,ms;
int cnt,mx;
vector<char> c,c1;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            cnt++;
            c.push_back(s[i]);
        }
        else 
        if(cnt>mx)
        {
            mx=cnt;
            c1=c;
            c.clear();
            cnt=0;
        }
        else
        {
            c.clear();
            cnt=0;
        }
        
    }
    for(auto i : c1)
    {
        cout << i;
    }
}