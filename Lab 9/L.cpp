#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    pair <int, int> m[n];
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        m[i].first = a + b;
        m[i].second = i + 1;
    }
    sort(m, m + n);
    for(auto i = 0; i < n; ++i){
        cout << m[i].second << " ";
    }
    return 0;
}