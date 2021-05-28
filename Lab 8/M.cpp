#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    set <int> s;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        s.insert(k);
    }
    int sum = accumulate(s.begin(), s.end(), 0);
    cout << sum;
}