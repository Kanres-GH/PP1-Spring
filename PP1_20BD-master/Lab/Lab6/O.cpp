#include <bits/stdc++.h>
using namespace std;
int sum;
string s;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-48;
    }
    if(sum%(s[s.size()-1]-48)==0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
}