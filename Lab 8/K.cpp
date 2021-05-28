#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m, k, sum = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    cin >> k;
    sort(v.begin(), v.end());
    v.erase(v.begin(), v.end() - k);
    for(int i = 0; i < k; ++i){
        sum += v[i];
    }
    cout << sum;
    return 0;
}