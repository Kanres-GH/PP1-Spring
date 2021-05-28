#include <bits/stdc++.h>
using namespace std;
string b,s;
int j;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!= 97 && s[i]!= 101 && s[i]!= 105 && s[i]!= 111 && s[i]!= 117)
        {
            if(s[i]!= 65 && s[i]!= 69 && s[i]!= 73 && s[i]!= 79 && s[i]!= 85)
            {
                j++;
                b[j]=s[i];
            }
        }
    }
   // cout << j << "\n";
    for(int i=1;i<=j;i++)
    {
        cout << b[i];
    }
}