#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int a,b,c,lower,upper;
string s;
int main()
{
    cin >> a >> b >> c >> s;
    for(int i =0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
        
    }
    cout << min(lower*c,upper*b);
}