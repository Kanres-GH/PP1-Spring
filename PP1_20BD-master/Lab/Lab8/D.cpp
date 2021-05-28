#include <bits/stdc++.h>
using namespace std;
int n,m,q;
int main()
{
    cin >> n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        a.push_back(m);
    }
    cin >> q;
    a.erase(a.begin()+q);
    for(int i=0;i<n-1;i++)
    {
        cout << a[i] << " ";
    }
}