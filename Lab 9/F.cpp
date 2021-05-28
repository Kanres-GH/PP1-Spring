#include<bits/stdc++.h>
using namespace std;
int main(){
    int cntl = 0, cntr = 0;
    string s;
    cin >> s;
    if(s[0] == ')' || s[s.size() - 1] == '('){
        cout << "NO";
    } else {
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '('){
                cntl++;
            }
            if(s[i] == ')'){
                cntr++;
            }
        }
        if(cntr == cntl){
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    return 0;
}