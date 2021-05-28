#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m;
    int n, k;
    string s;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s >> k;
        m[s] += k;
    }
    
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}