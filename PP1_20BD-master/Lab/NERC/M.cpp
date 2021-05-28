#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin >> n;
    long long a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n+1);
    long long mx=-111111111;
    long long  mn= 111111111;
    for(int i =1;i<=n;i++)
    {
        if(a[i]-a[i-1]>mx)
        {
            mx=a[i]-a[i-1];
        }
        if(i>1)
        {
            if(a[i]-a[i-2]<=mn)
            {
                mn=a[i]-a[i-2];
            }
        }
    }
    /*for(int i =2;i<=n;i++)
    {
        if(a[i]-a[i-2]<=mx)
        {
            cout << 0;
            return 0;
        }
    }*/
    if(mn<=mx)
    {
        cout << "0";
    }
    else
    {
        cout << mx;
    }
}