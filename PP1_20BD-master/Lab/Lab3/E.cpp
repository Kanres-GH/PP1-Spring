#include <iostream>
using namespace std;
long long int a,n,ans,max1;
int main ()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        ans+=a;
    }
    cout << ans;
}