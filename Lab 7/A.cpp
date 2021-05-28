#include<bits/stdc++.h>
using namespace std;

int Pow2(int);

int main(){
    int n;
    cin >> n;
    cout << Pow2(n);
    return 0;
}
int Pow2(int n){
    return pow(2, n);
}