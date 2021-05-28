#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m;
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s;
        m.insert(make_pair(s, i));
    }
    for(auto i : m){
        cout << i.first << " " << i.second + 1 << endl;
    }
}