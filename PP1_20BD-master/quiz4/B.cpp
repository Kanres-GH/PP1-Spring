#include <bits/stdc++.h>
using namespace std;
string s;
string a = " abcdefghijklmnopqrstuvwxyz";

int main()
{
    cin >> s;
    for(int i =0;i<s.size();i++)
    {
        cout << a[26-(s[i]-96)+1];
    }
}