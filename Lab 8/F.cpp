#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m, k, a;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    cin >> k >> a;
    for(int i = 0; i < k; ++i){
        cout << v[i] << " ";
    }
    cout << a << " ";
    for(int i = k; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}