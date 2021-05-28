#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t = s;
    reverse(s.begin(), s.end());
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == t[i]){
        cnt++;
        }
    }
    if(cnt == s.size()){
    cout << "YES";
    }
    else { 
        cout << "NO";
    }
    return 0;
}