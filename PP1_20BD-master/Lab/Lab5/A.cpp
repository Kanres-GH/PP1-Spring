#include <bits/stdc++.h>
using namespace std;
int small,big;
string s;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        else
        {
            big++;
        }
        
    }
    cout << small << " " << big;
}