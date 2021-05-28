#include<bits/stdc++.h>
using namespace std;
void Upper(string s){
    for(int i = 0; i < s.size(); i+=2){
        s[i] = toupper(s[i]);
    }
    cout << s;
}
int main(){
    string s;
    cin >> s;
    Upper(s);
    return 0;
}