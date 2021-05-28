#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,cr,ans,cred;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a >> b >> c >> cr;
        ans+=(a+b+c)*cr;
        cred+=cr;
    }
    cout << (double)ans/cred;
}