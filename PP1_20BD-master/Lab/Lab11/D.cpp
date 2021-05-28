#include <bits/stdc++.h>

using namespace std;
int n,m,a[111][111];
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 && a[i][j+1]==1)
            {
                cout << "NO";
                return 0;
            }
            if(a[i][j]==0 && a[i+1][j]==0 && a[i+1][j+1]==0 && a[i][j+1]==0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}