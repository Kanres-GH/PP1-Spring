#include <bits/stdc++.h>
using namespace std;
int n,cnt;
int main()
{
    cin >> n;
    if(n>1)
    {
        cout << 2 << " is prime\n";
    }
    for(int i=3;i<=n;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0)
        {
            cout << i<< " is prime" << "\n";
        }
        cnt=0;
    }
}