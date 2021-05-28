#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0, y = 0;
    string s;
    cin >> s;
    for(auto i : s){
        if(i == 'F'){
            y++;
        }
        if(i == 'B'){
            y--;
        }
        if(i == 'L'){
            x--;
        }
        if(i == 'R'){
            x++;
        }
    }
    while(y != 0){
        if(y < 0){
            y++;
            cout << "F";
        }
        if(y > 0){
            y--;
            cout << "B";
        }
    }
    while(x != 0){
        if(x > 0){
            x--;
            cout << "L";
        }
        if(x < 0){
            x++;
            cout << "R";
        }
    }
    return 0;
}