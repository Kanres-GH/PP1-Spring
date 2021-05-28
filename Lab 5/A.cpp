#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cap = 0, sm = 0;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cap++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            sm++;
        }
    }
    cout << sm << " " << cap;
    return 0;
}