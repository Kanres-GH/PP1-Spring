#include <bits/stdc++.h>
using namespace std;
int n,b=-1;
unsigned long long  cmp()
{
    ++b;
    unsigned long long ans=1;
    for(int i=1;i<=b;i++)
    {
        ans*=b;
    }
    return ans;
}
int main()
{
    cin >> n;
    vector <unsigned long long> a(n+1);
    generate(a.begin(),a.end(),cmp);
    for(int i =0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}