#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n){
    int sum = 0;
    int c = n;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % (c % 10) == 0){
        return true;
    } else {
        return false;
    }
}
int main(){
    int n;
    cin >> n;
    if(isLucky(n)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}