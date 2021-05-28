#include <bits/stdc++.h>
using namespace std;
int a,x,b,y,n;
int main()
{
    cin >> a >> x >> b >> y >> n;
    if(21*n-21*30 > 0)
    {
        cout << (21*n-21*30)*x+a << " ";
    }
    else
    {
        cout << a << " ";
    }
    if(21*n-21*45 > 0)
    {
        cout << (21*n-21*45)*y+b << " ";
    }
    else
    {
        cout << b << " ";
    }
}