#include <iostream>
using namespace std;
int a,n,ans,max1;
int main ()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        if(i==1)
        {
            max1 = a;
            ans = i;
        }
        if(max1<a)
        {
           max1=a;
           ans=i;
        }
    }
    cout << ans;
}