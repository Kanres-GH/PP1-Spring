#include <bits/stdc++.h>
using namespace std;
int n,m,q,k,ans;
vector<int> a;
int cnt;
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
void solve(int n,int i)
{
    while(cnt!=n)
    {
        if(isprime(i))
        {
            cnt++;
            if(cnt==n)
            {
                cout << i;
                break;
            }
        }
        i++;
    }
}
int main()
{
    cin >> n;
    int i=2;
    solve(n,i);
}