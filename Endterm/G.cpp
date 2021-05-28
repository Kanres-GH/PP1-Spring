#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char, int> m;
    string s;
    cin >> s;
    for(auto i : s){
        m[i]++;
    }
    for(auto i : s){
        if(m[i] != 0){
            cout << i;
            m[i] = 0;
        }
    }
    return 0;
}