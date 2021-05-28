#include <bits/stdc++.h>

using namespace std;

int n,a;
string s;
map<string,set<int> > m;
int main()
{
    cin >> n;
    cin >> s;
    for(int i =0;i<s.size();i++)
    {
        s[i]+=n;
        if(s[i]>'Z')
        {
            s[i] = 'A'+s[i]-91;
        }
        cout << s[i];
    }
}