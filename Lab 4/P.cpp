#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    int a[n][n];
    int max = INT_MIN;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i + j == n - 1){
                sum += a[i][j];
                }
            }
        }
    cout << sum;
    return 0;
}