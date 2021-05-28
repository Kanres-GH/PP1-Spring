#include <bits/stdc++.h>
using namespace std;
int cnt,b[111111],a,mx,n,m;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                cout << i << " ";
                continue;
            }
            if(i==0)
            {
                cout << j << " ";
                continue;
            }
            cout << i*j << " ";
        }
        cout << "\n";
    }
}