#include <bits/stdc++.h>

using namespace std;
set <int> s;
int main()
{
    int n,a;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        s.insert(a);
    }
    if(s.size()==n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}