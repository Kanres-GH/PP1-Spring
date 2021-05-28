#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> str;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        str.insert(tolower(s[i]));
    }
    cout << str.size() << endl;
    for(auto i = str.begin(); i != str.end(); ++i){
        cout << *i << " ";
    }
    return 0;
}