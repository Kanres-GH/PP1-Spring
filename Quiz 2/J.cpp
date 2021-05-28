#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n, m, x = 0, y = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = 'X';
        }
    }
    a[0][0] = '*';
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'D'){
                y++;
                a[y][x] = '*';
            }
            if(s[i] == 'U'){
                y--;
                a[y][x] = '*';
            }
            if(s[i] == 'L'){
                x--;
                a[y][x] = '*';
            }
            if(s[i] == 'R'){
                x++;
                a[y][x] = '*';
        }
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << char(a[i][j]);
        }
        cout << endl;
    }
    return 0;
}