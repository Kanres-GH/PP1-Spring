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
            int b=(int)sqrt(a);
            if(b*b==a)
            {
                cout << sqrt(a) << " ";
                continue;
            }
            else
            {
                cout << a << " ";
            }
            
        }
        cout << "\n";
    }
}