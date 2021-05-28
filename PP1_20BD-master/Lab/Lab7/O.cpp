#include <bits/stdc++.h>
using namespace std;
int n,cnt=1,m;
string s ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int bin(int n,int m)
{
    if(n==0)
    {
        return 0;
    }
    bin(n/m,m);
    cout << s[(n%m)];
}
int main()
{
    cin >> n >> m;
    bin(n,m);
}