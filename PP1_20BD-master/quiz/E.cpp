#include <iostream>
using namespace std;
int ans;
string s;
int main()
{
    cin >> s;
    if(s[0]!=0)
    {
        ans+=s[0]-48;
        if(s[1]!=0)
        {
            ans += s[1]-48;
            if(s[2]!=0)
            {
                ans+=s[2]-48;
            }
        }
    }
    cout << ans;
}