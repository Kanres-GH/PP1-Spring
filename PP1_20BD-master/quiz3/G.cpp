#include <bits/stdc++.h>
using namespace std;
int n;
void ans(int n)
{
    if(n==1)
    {
        return;
    }
    int i=2;
    for(;;)
    {
        if(n%i!=0)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    cout << i << " ";
    ans(n/i);
}
int main()
{
    cin >> n;
    ans(n);
}