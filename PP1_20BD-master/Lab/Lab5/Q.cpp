#include <bits/stdc++.h>
using namespace std;
int a[11],cnt,n;
string s,t;
char c;
int main()
{
    cin >> t >> s;
    if(s.size()%t.size()!=0)
    {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<s.size()/t.size();i++)
    {
        if(s.substr(i*t.size(),t.size())!=t)
        {  
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}