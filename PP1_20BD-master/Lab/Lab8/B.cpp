#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin >> n;
    vector<int>a;
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        a.push_back(m);
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}