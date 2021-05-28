#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m, a, b;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    cin >> a >> b;
    v.erase(v.begin() + a, v.begin() + b + 1);
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}