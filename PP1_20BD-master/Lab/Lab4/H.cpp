#include <bits/stdc++.h>
using namespace std;
int cnt,a,mx,n,m,mn,ans,ansi;
int main()
{
    cin >> n >> m;
    mn=111111;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a;
            ans+=a;
        }
        if(mn>ans)
        {
            mn=ans;
            ansi=i;
        }
        ans=0;
    }
    cout << ansi;
}