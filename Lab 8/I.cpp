#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m, k;
    cin >> n;
    bool found = true;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    cin >> k;
    for(int i = 0; i < n; ++i){
        if(v[i] == k){
            cout << "Yes";
            break;
        } else {
            found = false;
        }
    }
    if(found == false){
        cout << "No";
    }
    return 0;
}