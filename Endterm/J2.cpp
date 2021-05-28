#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i < n; ++i){
        if(i % 2 == 0){
            if(a[i]-a[i-1] >= 3){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}