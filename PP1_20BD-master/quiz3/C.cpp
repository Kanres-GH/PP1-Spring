#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,cnt;
char a[15][15];
void solve(int x,int y)
{
    if(a[x-1][y]=='#' && x-1 > 0)
    {
        a[x-1][y]='.';
        solve(x-1,y);
    }
    if(a[x+1][y]=='#' && x+1 <=n)
    {
        a[x+1][y]='.';
        solve(x+1,y);
    }
    if(a[x][y-1]=='#' && y-1 > 0)
    {
        a[x][y-1]='.';
        solve(x,y-1);
    }
    if(a[x][y+1]=='#' && y+1 <=m)
    {
        a[x][y+1]='.';
        solve(x,y+1);
    }
}
int main()
{
    cin >> n >> m;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
     for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='#')
            {
                solve(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;
}