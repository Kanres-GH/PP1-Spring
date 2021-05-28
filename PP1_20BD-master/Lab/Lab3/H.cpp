#include <iostream>
using namespace std;
long long int a[111111],l,r,ans,n;
int main ()
{
    cin >> n >> l >> r;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=l;i<=r;i++)
    {
        ans+=a[i];
    }
    cout << ans;
}