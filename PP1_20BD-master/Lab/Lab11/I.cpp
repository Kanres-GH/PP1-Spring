#include <bits/stdc++.h>

using namespace std;

int n,a,cnt;
string s;
map <char,int> s1;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        s1[s[i]]++;
    }
    for(auto i : s1)
    {
        if(i.second%2==1)
        {
            cnt++;
        }
    }
    if(cnt>1)
    {
        cout << "JOJO";
    }
    else
    {
        cout << "ZA WARUDO TOKI WO TOMARE";
    }
    
}