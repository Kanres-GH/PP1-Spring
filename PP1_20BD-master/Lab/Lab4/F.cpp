#include <bits/stdc++.h>
using namespace std;
int cnt,a,mx,n,m,x,y;
int main()
{
    cin >> n;
    mx = -1000000000;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> m;
            if(mx<m)
            {
                mx=m;
                x=i;
                y=j;
            }
        }
    }
    cout << x << " " << y;
}