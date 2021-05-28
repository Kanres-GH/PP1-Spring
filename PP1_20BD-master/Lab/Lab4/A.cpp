#include <bits/stdc++.h>
using namespace std;
int n,mx,a[111111];
int main()
{
    mx=-111111;
    cin >> n;
    for(int i=1;i<=n*n;i++)
    {
        cin >> a[i];
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    cout << mx;
}