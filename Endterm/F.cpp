#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int p = n;
    while(n > 0){
        cnt++;
        n /= 10;
    }
    cout << int(p / pow(10, cnt - 1)) + (p % 10);
    return 0;
}