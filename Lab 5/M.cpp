#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    int n, cnt = 0;
    cin >> s >> c >> n;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == c){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}