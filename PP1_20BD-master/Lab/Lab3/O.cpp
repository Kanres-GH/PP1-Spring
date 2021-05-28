#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long int a[111111],b[111111],l,r,ans,n;
int main ()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n+1);
    for(int i=n;i>=1;i--)
    {
        cout << a[i] << " ";
    }
}