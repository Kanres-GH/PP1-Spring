#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int second = n / 10 % 10;
    if(second % 2 == 0 && second % 3 != 0 && second % 6 != 0 && second != 0){
        cout << "Good";
    }
    if(second % 3 == 0 && second % 2 != 0 && second % 6 != 0 && second != 0){
        cout << "Very good";
    }
    if(second % 6 == 0 && second % 2 == 0 && second % 3 == 0 && second != 0){
        cout << "Best";
    }
    if(second == 0 || (second % 2 != 0 && second % 6 != 0 && second % 3 != 0)){
        cout << "None";
    }
    return 0;
}