#include<bits/stdc++.h>
using namespace std;            // ax - b = cx + d
int main(){
    int a, b, c, d;             // ax - cx = b + d                              
    cin >> a >> b >> c >> d;    // x(a - c) = b + d  
    cout << (b + d) / (a - c);  
    return 0;                    // x = (b + d) / (a - c)
}