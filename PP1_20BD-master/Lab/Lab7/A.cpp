#include <bits/stdc++.h>
using namespace std;
int n,res=1,cnt=1;
int stp(int n)
{
    if(n==0)
    {
        return res;
    }
    res*=2;
    stp(n-1);
}
int main()
{
    cin >> n;
    cout << stp(n);
}