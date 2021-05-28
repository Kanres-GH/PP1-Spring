#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    map<string,int> a;
    for(int i=1;i<=n;i++)
    {
        string s;
        int m;
        cin >> s >> m;
        a[s]=m;
    }
    sort(a.begin(),a.end());
}