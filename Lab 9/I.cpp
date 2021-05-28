#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin >> n;
map<string, bool> mp;
for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    if(!mp[s]){
        cout << "new user added\n";
        mp[s] = true;
    }else cout << "user already exists\n";
}
}
int main(){
    solve();
    return 0;
}