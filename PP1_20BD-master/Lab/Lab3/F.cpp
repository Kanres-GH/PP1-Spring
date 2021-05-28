#include <iostream>
using namespace std;
long long int a[111111],b[111111],n,ans,max1,j;
int main ()
{
    cin >> n;
    j=n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[j]=a[i];
        j--;
    }
    for(int i=1;i<=n;i++)
    {
       cout << b[i] << " ";
    }
}