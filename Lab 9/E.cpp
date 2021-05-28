#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <string> v;
    map <string, int> m;
    int n, cnt = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s;
        v.push_back(s);
        m[v[i]]++;
    }
    for(auto i : m){
        if(i.second == 3){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}