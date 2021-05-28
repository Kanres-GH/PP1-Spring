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

    for(int i = v.size() - 1; i >= 0; --i){
        cout << v[i] << " ";
    }
    return 0;
}