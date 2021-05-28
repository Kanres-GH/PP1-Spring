#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    cin >> k;
    v.erase(v.begin() + k);
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}