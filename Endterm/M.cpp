#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> s;
    vector <int> v, v1, v2;
    int n, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
        s.insert(k);
    }
    sort(v.begin(), v.end());
    for(auto i : s){
        v1.push_back(i);
    }
    if(v == v1){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}