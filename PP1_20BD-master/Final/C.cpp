#include <bits/stdc++.h>
using namespace std;
int n,l,a[111111],mx=-111111;
vector <int> v;
set<int> s;
int main()
{
    cin >> n;
    cin >> a[0];
    v.push_back(a[0]);
    for(int i =1;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>=v[v.size()-1])
        {
            while(!v.empty() && v[v.size()-1]<=a[i])
            {
                v.pop_back();
            }
        }
        v.push_back(a[i]);
    }
    cout << v.size();
}