#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4], cnt = 0;
    for(int i = 0; i < 4; ++i){
        cin >> a[i];
        if(a[i] > 64 && a[i] < 133){
            cnt++;
        }
    }
    if(cnt == 4){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}