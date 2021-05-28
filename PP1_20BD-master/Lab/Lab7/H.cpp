#include <bits/stdc++.h>
using namespace std;
unsigned long long cnt;
int ans(int n)
{
    if (n <= 1) 
        return n;
    else
    {
       return ans(n-1) + ans(n-2); 
    }
}
int main()
{
    int n;
    cin >> n;
    cout << ans(n-1);
}