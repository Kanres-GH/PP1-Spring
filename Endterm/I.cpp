#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, cnt = 0, cnt2 = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        int first = a[i][0];
        for(int j = 0; j < m; ++j){
            if(a[i][j] == first && a[i][j] == 0){
                cnt++;
            } else {
                cnt = 0;
                break;
            }
        }
        if(cnt == m){
            cnt2++;
            cnt = 0;
        }
    }
    cout << cnt2;
    return 0;
}