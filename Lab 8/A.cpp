#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    return 0;
}