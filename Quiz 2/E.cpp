#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    map <char, int> m;
    string s;
    cin >> s;
    for(auto i : s){
        m[i]++;
    }
    for(auto i : m){
        cout << i.first << ": " << i.second << endl;
    }
    return 0;
}