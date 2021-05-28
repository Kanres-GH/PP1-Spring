#include <bits/stdc++.h>
using namespace std;
string s,t;
int sum,a,n;
int ans()
{
    
    while(1)
    {
        cin >> a;
        if(a==0)
        {
            return sum;
            break;
        }
        sum+=a;
    }
}
int main()
{
    cout << ans();
}