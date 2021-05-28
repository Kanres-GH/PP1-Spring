#include <bits/stdc++.h>
using namespace std;
void diff(int n){
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    for(int i = 0; i < n; ++i){
        cout << abs(a[i] - b[i]) << " ";
    }
}
int main(){
    int n;
    cin >> n;
    diff(n);
    return 0;
}