#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    set<int> s;
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> a;
        if(s.count(a)==1)
        {
            cout << "NO";
            return 0;
        }
        s.insert(a);
    }
    cout << "YES";

}