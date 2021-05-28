#include <bits/stdc++.h>
using namespace std;
int b,n,x,y;
map<pair<int,int>,int> a;
int main()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> x >> y;
        if(x>y)
        {
            a[make_pair(y,x)]++;
        }
        else if(y>x)
        {
            a[make_pair(x,y)]++;
        }
        else
        {
            a[make_pair(x,y)]++;
        }
        cout << a[make_pair(min(x,y),max(x,y))]-1 << endl;
    }
}