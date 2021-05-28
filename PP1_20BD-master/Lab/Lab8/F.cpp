#include <bits/stdc++.h>
using namespace std;
int n,m,q,k;
int main()
{
    cin >> n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        a.push_back(m);
    }
    cin >> q >> k;
    a.insert(a.begin()+q,k);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}