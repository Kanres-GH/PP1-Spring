#include <iostream>
using namespace std;
int n,ans,x,y,mx=-111111;
int main()
{
    cin >> n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(i==j)
            {
                if(a[i][j]>mx)
                {
                    mx=a[i][j];
                    x=i;
                    y=j;
                }
            }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << x << ';' << y;
}