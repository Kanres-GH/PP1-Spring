#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int> s;
    int n, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        s.insert(k);
    }
    for(auto i = s.begin(); i != s.end(); ++i){
        if(*i % 2 == 0){
            continue;
        }
        cout << *i << " ";
    }
    return 0;
}