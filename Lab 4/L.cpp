#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> ind_i;
    int n, m, sum = 0, ii = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int min = INT_MAX;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(a[j][i] < min){
                min = a[j][i];
                ii = j + 1;
            }
        }
        v.push_back(min);
        ind_i.push_back(ii);
        min = INT_MAX;
    }
    cout << "coordinates of min elements:" << endl;
    for(int i = 0 ; i < m; ++i){
        cout << ind_i[i] << ";" << i + 1 << endl;
    }
    cout << "Their sum:" << endl << accumulate(v.begin(), v.end(), 0);
    return 0;
}