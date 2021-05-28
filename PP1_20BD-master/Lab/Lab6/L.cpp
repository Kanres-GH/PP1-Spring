#include <bits/stdc++.h>
using namespace std;
string s;
int n,cnt,mx;
int main()
{
    cin >> s >> n;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            cnt++;
        }
        else
        {
            if(cnt>mx)
            {
            mx=cnt;
            }
            cnt = 0;
        }
    }
    if(mx >= n)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not valid";
    }
    
}