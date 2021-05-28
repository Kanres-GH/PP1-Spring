#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    bool ok = false;
    for(int i = 0; i < s1.size(); ++i){
        if(s1 == s2){
            ok = true;
            cout << cnt;
            break;
        } else {
            cnt++;
            rotate(s1.begin(), s1.begin() + (s1.size() - 1), s1.end());
        }
    }
    if(ok == false){
        cout << "Understandable have a nice day";
    }
    return 0;
}