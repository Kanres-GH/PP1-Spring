#include <bits/stdc++.h>
using namespace std;
string s,s1;
map<string,string> m;
multimap<string,string> m1;
int n;  
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> s >> s1;
        if(m.find(s)==m.end())
        {
            m[s1]=s;
        }
        else
        {
            m[s1]=m[s];
            m.erase(s);
        }
    }
    for(auto i : m)
    {
        m1.insert(make_pair(i.second,i.first));
    }
    cout << m1.size() << endl;
    for(auto i : m1)
    {
        cout << i.first << " " << i.second << "\n";
    }
}