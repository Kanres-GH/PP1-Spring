#include <bits/stdc++.h>

using namespace std;
map<string,int> m;
int main()
{
    string s;
    cin >> s;
    m.insert(make_pair("SAT",1));
    m.insert(make_pair("SUN",7));
    m.insert(make_pair("MON",6));
    m.insert(make_pair("TUE",5));
    m.insert(make_pair("WED",4));
    m.insert(make_pair("THU",3));
    m.insert(make_pair("FRI",2));
    cout << m[s];
}