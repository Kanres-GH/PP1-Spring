#include <bits/stdc++.h>
using namespace std;
int n,q,cnt=1;
void bin(int q,int a[],int n,int cnt)
{
    if(a[cnt]==q)
    {
        cout << "Yes";
        return;
    }
    if(cnt==n)
    {
        cout << "No";
        return;
    }
    bin(q,a,n,cnt+1);
}
int main()
{
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    cin >> q;
    bin(q,a,n,cnt);
}