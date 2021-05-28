#include <bits/stdc++.h>
using namespace std;
int n,m,x,ans,cnt;
int main()
{
    cin >> n >> m >> x;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
		for(int j=1;j<=m;j++)
    	{
    		cin >> a[i][j];
    		if(a[i][j]==x)
    		{
    			cnt++;
			}
		}
		if(cnt!=0)
		{
			ans++;
		}
		cnt =0;
	}
	cout << ans;
}
