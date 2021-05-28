#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}