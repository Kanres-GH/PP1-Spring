#include <bits/stdc++.h>
using namespace std;
int n,m;
string s,t;
int main()
{
    cin >> s >> n >> m;
    cout << s.substr(n,m-n+1);
}