#include <bits/stdc++.h>
using namespace std;
int cnt,a,mx,n,m,x,y;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n+1-i)
            {
                cout << i;
                continue;
            }
            else
            {
                cout << '.';
            }
        }
        cout << "\n";
    }
}