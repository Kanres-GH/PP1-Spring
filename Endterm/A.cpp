#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> l;
    for(int i = 0; i < n; ++i){
        if(a[i] >= l){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}