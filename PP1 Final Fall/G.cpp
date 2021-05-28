#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int cnt = 0;
    for(int i = 2; i <= n / 2; ++i){
        if(n % i == 0){
            cnt++;
        }
    }
    return cnt == 0;
}
int main(){
    int n;
    cin >> n;
    int num1 = 2, num2 = 2;
    for(int i = 2; i < n; ++i){
        if(isPrime(i)){
            num1 = i; 
            for(int j = num1 + 1; j < n; ++j){  
                if(isPrime(j) && num1 + j == n){
                    num2 = j;
                    break;
                }
            }
        }
        if(num1 + num2 == n){
            break;
        }
    }
    cout << num1 << " " << num2;
    return 0;
}