#include <bits/stdc++.h>
using namespace std;
int n;
bool isprime(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    for(int i =2;i<=n;i++)
    {
        if(isprime(i)&& isprime(n-i))
        {
            cout << i << " " << n-i;
            return 0;
        }
    }
}