#include <bits/stdc++.h>
using namespace std;
int m,k,ans;
char q;
set<char> a;
int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            s[i]+=32;
        }
        a.insert(s[i]);
    }
    set <char> :: iterator it=a.begin();
    cout << a.size() << "\n";
    for (int i = 1; it != a.end(); i++, it++)
    {
        q=*it;
        cout << q << " ";
    }
}