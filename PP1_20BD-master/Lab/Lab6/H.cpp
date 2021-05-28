#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-48)%2!=0)
        {
            cout << "Not valid";
            return 0;
        }
    }
    cout << "Valid";
}