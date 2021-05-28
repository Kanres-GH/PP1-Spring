#include <iostream>
using namespace std;
long long int a[111111],b[111111],l,r,ans,n;
int main ()
{
    cin >> n >> l >> r;
    int j=r;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(i>=l && i<r+1)
        {
            b[j]=a[i];
            j--;
        }
    }
    for(int i = l;i<=r;i++)
    {
        a[i]=b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
}