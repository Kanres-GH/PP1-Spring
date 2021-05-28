#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k, cnt = 0;
    vector <int> v;
    cin >> n >> m;
    for(int  i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
    }
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == m){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}