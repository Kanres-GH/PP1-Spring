#include <iostream>
using namespace std;
int a,n,b,ans;
int main()
{
    cin >> b;
    for(;;)
    {
        cin >> a;
        if(a==0)
        {
            cout << ans;
            return 0;
        }
        if(a>b)
        {
            ans++;
        }
        b=a;
    }
}