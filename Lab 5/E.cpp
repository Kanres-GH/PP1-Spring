#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum_o = 0, sum_e = 0;
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); i += 2){
        sum_o += int(n[i]);
    }
    for(int i = 1; i < n.size(); i += 2){
        sum_e += int(n[i]);
    }
    if(sum_o == sum_e){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}