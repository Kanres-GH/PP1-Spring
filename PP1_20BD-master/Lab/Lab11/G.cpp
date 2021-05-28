#include <bits/stdc++.h>

using namespace std;

int n,a;
string s;
map<string,set<int> > m;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s >> a;
        m[s].insert(a);
    }
    for(auto i : m)
    {
        if(i.second.size()>=3)
        {
            cout << i.first << " +1\n"; 
        }
        else
        {
            cout << i.first << " NO BONUS\n";
        }
        
    }
}