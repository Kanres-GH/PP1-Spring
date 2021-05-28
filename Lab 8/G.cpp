#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int cnt = 0;
    for(int i = 2; i <= n / 2; ++i){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 0){
        return true;
    } else {
        return false;
    }
}
int main(){
    vector <int> v;
    int n, m, k, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
    }
    cin >> m;
    for(int i = 0; i < v.size(); ++i){
        if(v[i] >= m && isPrime(v[i])){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}