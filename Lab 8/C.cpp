#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v, l;
    int n, k, a, b;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
    }
    cin >> a >> b;
    l = v;
    reverse(v.begin(), v.end());
    if(a < n && b > n - 1){
        for(int i = 0; i < a; ++i){
            cout << l[i] << " ";
    }
        for(int i = a; i < l.size(); ++i){
            cout << v[i] << " ";
        }
    } 
    else if(a > n - 1 && b > n - 1){
        for(int i = 0; i < l.size(); ++i){
            cout << l[i] << " ";
        }
    } else {
        for(int i = 0; i < a; ++i){
            cout << l[i] << " ";
    }
        for(int i = a; i <= b; ++i){
            cout << v[i] << " ";
    }
        for(int i = b + 1; i < v.size(); ++i){
            cout << l[i] << " ";
        }
    }
    return 0;
}