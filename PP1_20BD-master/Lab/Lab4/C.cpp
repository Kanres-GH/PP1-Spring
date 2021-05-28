#include <bits/stdc++.h>
using namespace std;
int cnt,b[111111],a,mx,n,m;
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a;
            if(a<0)
            {
                cnt++;
                //cout << a;
            }
        }
    }
    cout << cnt;
}