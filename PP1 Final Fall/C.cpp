#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int l = 0;
    while(l < n){
        int index;
        int max = INT_MIN;
        for(int i = l; i < n; ++i){
            if(a[i] >= max){
                max = a[i];
                index = i;
            }
        }
        l = index + 1;
        cnt++;
    }
    cout << cnt;
    return 0;
}