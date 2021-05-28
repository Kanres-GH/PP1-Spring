#include <bits/stdc++.h>
using namespace std;
bool isValid(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(int(s[i]) % 2 == 0){
            cnt++;
        }
    }
    if(cnt == s.size()){
        return true;
    } else {
        return false;
    }
}
int main(){
    string s;
    cin >> s;
    if(isValid(s) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}