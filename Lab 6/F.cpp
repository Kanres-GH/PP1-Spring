#include <bits/stdc++.h>
using namespace std;
bool DigInStr(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(isdigit(s[i]) == true){
            cnt++;
        }
    }
    if(cnt >= n){
        return true;
    } else {
        return false;
    }
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    if(DigInStr(s, n) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}