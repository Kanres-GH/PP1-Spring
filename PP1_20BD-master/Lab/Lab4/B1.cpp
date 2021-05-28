#include <iostream>
using namespace std;
int n,mx,ans,x;
int main()
{
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(i==1)
        {
            mx=a[i];
        }
        if(a[i]>mx)
        {
            mx=a[i];
            x=i;
        }
    }
    a[x]=-1111111;
    mx=-1111111;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            x=i;
        }
    }
    cout << mx;
}