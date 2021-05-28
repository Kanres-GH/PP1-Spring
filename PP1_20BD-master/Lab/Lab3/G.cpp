#include <iostream>
using namespace std;
long long int a[111111],b[111111],n,ans,max1,j,min1,ansmax,ansmin;
int main ()
{
    cin >> n;
    max1 = -1;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(i==1)
        {
            min1=a[i];
            ansmin=i;
        }
        if(max1<a[i])
        {
            max1 =a[i];
            ansmax=i;
        }
        if(min1>a[i])
        {
            min1 = a[i];
            ansmin=i;
        }
    }
    a[ansmax]=a[ansmin];
    for(int i=1;i<=n;i++)
    {
       cout << a[i] << " ";
    }
}