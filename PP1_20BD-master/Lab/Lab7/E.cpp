#include <bits/stdc++.h>
using namespace std;
int n;
void ans(int n)
{
    if(n==1)
    {
        cout << "Yes";
        return;
    }
    if(n%2==0)
    {
        ans(n/2);
    }
    else
    {
        cout << "No";
        return;
    }
    
    
}
int main()
{
    cin >> n;
    ans(n);
}