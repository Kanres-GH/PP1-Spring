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
    sort(v.begin(), v.end());
    for(int i = 0; i < k; ++i){
        cout << v[0] << " ";
        v.erase(v.begin());
    }
    return 0;
}