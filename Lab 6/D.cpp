#include <bits/stdc++.h>
using namespace std;
bool ok(int n, int a[], int m){
    bool c = false;
    for(int i = 0; i < n; ++i){
        if(a[i] == m){
            c = true;
            break;
            } else {
        c = false;
        }
    }
    if(c == true){
        return true;
    } else{
        return false;
    }
}
int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;
    if(ok(n, a, m) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}