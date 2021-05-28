#include <iostream>
using namespace std;
int n,ans,x,y,sum;
int main()
{
    cin >> n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(i+j==n+1)
            {
                sum+=a[i][j];
            }
        }
    }
    cout << sum;
}