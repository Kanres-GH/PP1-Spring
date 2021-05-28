#include <bits/stdc++.h>
using namespace std;
int n,m,q,k,ans;
bool ok=true;
string v;
int main()
{
    map<string,int>m;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> v;
        m[v]++;
        if(m[v]>1)
        {
            cout << v << endl;
            m[v]=-11111;
            ok = false;
        }
    }
    if(ok)
    {
        cout << "Understandable, have a great day";
    }
    /*int cnt = 0;
    map <string,int> :: iterator it=m.begin();
    for (int i = 0; it != m.end(); it++, i++) 
    {
        if((it->second)>1)
        {
            cout << it->first << endl;
        }
    }*/
}