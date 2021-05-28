#include<bits/stdc++.h>
using namespace std;
int main(){
map<string, string> mp;
int n;
cin >> n;
for(int i = 1; i <= n; i++){
    string l, p;
    cin >> l >> p;
    mp[l] = p;
}
int m;
cin >> m;
while(m--){
    string l, p;
    cin >> l >> p;
    if(!mp.count(l)) cout << "login error\n";
    else if(mp[l] != p) cout << "password error\n";
    else cout << "correct password\n";
    }
return 0;
}