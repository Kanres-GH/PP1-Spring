#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t, st = s;
    cin >> s >> t;
    for(int i = 0; i < t.size()/s.size(); ++i){
        st += s;
    }
    if(t.size() % s.size() == 0 && t == st){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}