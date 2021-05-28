#include <bits/stdc++.h>
using namespace std;
int main(){
    string letters = "abcdefghijklmnopqrstuvwxyz.";
    while (true){
        letters[26] = letters[0];
        for (int i = 0; i < 26; i++){
            letters[i] = letters[i + 1];
            cout << letters[i];
        }
        cin.get();
    }
    return 0;
}