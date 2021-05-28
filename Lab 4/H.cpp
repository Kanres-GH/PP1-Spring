#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> l;
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            sum += a[i][j];
        }
        l.push_back(sum);
        sum = 0;
    }
    int min = min_element(l.begin(), l.end()) - l.begin();
    cout << min + 1;
    return 0;
}