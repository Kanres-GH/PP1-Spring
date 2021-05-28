#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ind_i = 0;
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
            if (i == j){
                if (a[i][j] > max){
                    max = a[i][j];
                    ind_i = i + 1;
                }
            }
        }
    }

    cout << "Maximum element is: " << max << " with coordinates: " << ind_i << ";" << ind_i;
    return 0;
}