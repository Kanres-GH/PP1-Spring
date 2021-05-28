#include <bits/stdc++.h>
using namespace std;
int cnt,b[111111],a[1111111],mx,j=1,n;
int main()
{
    cin >> n;
    cin >> a[0];
    mx=a[0];
    for(int i=1;i<n*n;i++)
    {
        cin >> a[i];
        if(a[i]==a[i-1])
        {
            cnt++;
        }
    }
    sort(a,a+n*n);
    for(int i=n*n-1;i>=0;i--)
    {
        //cout << a[i];
        if(a[i]!=a[i-1])
        {
            cout << a[i-1];
            return 0;
        }
    }
}