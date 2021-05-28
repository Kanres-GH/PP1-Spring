#include <bits/stdc++.h>
using namespace std;
float hypot(int a, int b){
    return sqrt(a * a + b * b);
}
int main(){
    float a, b;
    cin >> a >>b;
    cout << setprecision(4) << hypot(a, b);
    return 0;
}