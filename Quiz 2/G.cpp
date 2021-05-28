#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char, int> m;
    string s;
    cin >> s;
    for(auto i : s){
        m[i]++;
        if(m[i] > 1){
            cout << i;
        }
    }
    return 0;
}