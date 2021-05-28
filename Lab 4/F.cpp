#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ind_i = INT_MIN, ind_j = INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin>>a[i][j];
        }
    }
    int max = INT_MIN;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > max){
                max = a[i][j];
                ind_i = i;
                ind_j = j;
            }
        }
    }
    cout << ind_i + 1 << " " << ind_j + 1;
    return 0;
}