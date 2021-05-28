#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); ++i){
        if(isVowel(s[i]) == false){
            cout << s[i];
        }
    }
    return 0;
}
