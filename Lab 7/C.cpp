#include<bits/stdc++.h>
using namespace std;
bool isInArray(int n, int a[], int m){
    bool ok = false;
    for(int i = 0; i < n; ++i){
        if(a[i] == m){
            ok = true;
            break;
        }
    }
    if(ok){
        return true;
    } else {
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
    if(isInArray(n, a, m)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}