#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    string s, t = "";
    cin >> s;
    for(auto i : s){
        if(i == c){
            continue;
        } else {
            t += i;
        }
    }
    cout << t;
    return 0;
}