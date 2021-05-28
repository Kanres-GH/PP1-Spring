#include <bits/stdc++.h>
using namespace std;
int n,k,a[111];
void ans()
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])<=k)
        {
            cout << "cheater";
            return;
        }
    }
    cout << "no";
}
int main()
{
    cin >> n >> k;
    ans();
}