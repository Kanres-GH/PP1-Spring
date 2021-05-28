#include <bits/stdc++.h>
using namespace std;
int a[5],mx1;
int mx(int a[])
{
    mx1 =a[1];
    for(int i=2;i<=4;i++)
    {
        if(a[i]>mx1)
        {
            mx1=a[i];
        }
    }
    cout << mx1;
}
int main()
{
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    mx(a);
}