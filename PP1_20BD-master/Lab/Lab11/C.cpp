#include <bits/stdc++.h>

using namespace std;
string s;
int cnt,n;
double a;
map <string,double> m;
multimap<double,string> m1;
int main()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> s >> a;
        m[s]+=a;
        cnt+=a;
    }
    for(auto& i:m)
    {
        i.second = (double)i.second/cnt*100;
        m1.insert({i.second,i.first});
    }
    for(multimap<double,string>::iterator i=--m1.end();i!=--m1.begin();i--)
    {
        cout << (*i).second << " " << (*i).first << "%\n";
    }
}