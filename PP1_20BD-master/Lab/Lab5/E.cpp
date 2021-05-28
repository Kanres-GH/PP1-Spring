#include <bits/stdc++.h>
using namespace std;
int sum,sum1;
string s,t;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            sum+=s[i];
        }
        else
        {
            sum1+=s[i];
        }
    }
    if(sum==sum1)
    {   
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}