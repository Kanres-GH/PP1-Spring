#include <bits/stdc++.h>
using namespace std;
int m,q,k,ans;
set<int> a;
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
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        a.insert(m);
    }
    set <int> :: iterator it=a.begin();
    for (int i = 1; it != a.end(); i++, it++) 
    {
        q=*it;
        ans+=q;
    }
    cout << ans;
}