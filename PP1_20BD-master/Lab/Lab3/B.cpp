#include <iostream>
using namespace std;
int a,n,ans,max1;
int main ()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        if(a>0)
        {
            ans++;
        }
    }
    cout << ans;
}