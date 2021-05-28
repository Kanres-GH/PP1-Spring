#include <bits/stdc++.h>
using namespace std;
int m,q,k,ans;
vector<int> a;
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
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    cout << a[a.size()-1]-a[0];
}