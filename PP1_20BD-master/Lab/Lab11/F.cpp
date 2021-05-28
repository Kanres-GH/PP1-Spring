#include <bits/stdc++.h>

using namespace std;

int a,b,k,cnt;
vector <int> v;
int main()
{
    cin >> a >> b >> k;
    for(int i = 1;i<=max(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            v.push_back(i);
        }
    }
    cout << v[v.size()-k];
}