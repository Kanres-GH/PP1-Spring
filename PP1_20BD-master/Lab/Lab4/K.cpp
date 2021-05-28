#include <bits/stdc++.h>
using namespace std;
int n,m,sum;
int sum1[111111];
int main()
{
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
            sum+=a[i][j];
            sum1[j]+=a[i][j];
        }
        cout << "The sum of row number " << i << " is " << sum << "\n";
        sum =0;
    }
    for(int i=1;i<=m;i++)
    {
        cout << "The sum of column number " << i << " is " << sum1[i] << "\n";
    }
}