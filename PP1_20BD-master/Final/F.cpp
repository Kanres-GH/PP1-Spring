#include <bits/stdc++.h>
using namespace std;
string s,s1,s2;
int n;
int main()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> s >> s1;
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        int sum = stoi(s)+stoi(s1);
        s2 = to_string(sum);
        reverse(s2.begin(),s2.end());
        cout << stoi(s2) << "\n";
    }
}