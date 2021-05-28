#include <bits/stdc++.h>
using namespace std;
int n,cnt=1;
void ans(int a,int n)
{
    cout << a << " ";
    if(a==n)
    {
        return;
    }
    ans(a+1,n);
}
int main()
{
    cin >> n;
    ans(1,n);
}