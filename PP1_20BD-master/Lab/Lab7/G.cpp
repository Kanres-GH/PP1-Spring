#include <bits/stdc++.h>
using namespace std;
long long cnt=1,n;
int ans(int n)
{
    if(n>=1)
    {
        return n*ans(n-1);
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    cin >> n;
    cout << ans(n);
}