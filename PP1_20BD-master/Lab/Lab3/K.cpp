#include <iostream>
using namespace std;
long long int a[111111],b[111111],l,r,ans,n;
int main ()
{
    cin >> n;
    cin >> a[1];
    cout << a[1] << " ";
    for(int i=2;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]!=a[i-1])
        {
            cout << a[i] << " ";
        }
    }
}