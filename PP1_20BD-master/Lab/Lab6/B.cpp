#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin >> b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout << abs(a[i]-b[i]) << " ";
    }
}