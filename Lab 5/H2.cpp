#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    bool ok = true;
    int cnt = 1;
    int checkpoint = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == s[i + 1]){
            cnt++;
        } else {
            if(checkpoint == 0){
                checkpoint = cnt;
                cnt = 1;
            } else {
                if(checkpoint == cnt){
                    cnt = 1;
                } else {
                    ok = false;
                    break;
                }
            }
        }
    }
    if(ok){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

return 0;
}