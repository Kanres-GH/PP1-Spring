#include <bits/stdc++.h>
using namespace std;
int cnt,a,mx,n,m,mn,ans,ansi;
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a;
            if((i+j)%2==0)
            {
                cout << a + 1 << " ";
            }
            else
            {
                cout << a-1 << " ";
            }
            
        }
        cout << "\n";
    }
}