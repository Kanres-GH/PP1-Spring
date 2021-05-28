#include <bits/stdc++.h>
using namespace std;
int n,a[1000002],m,x;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        a[m]=1;
    }
    cin >> x;
    if(a[x]==1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}