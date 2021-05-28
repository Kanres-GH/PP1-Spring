#include<bits/stdc++.h>
using namespace std;
void perc(float n, float m){
    cout << m * 100 / n;
}
int main(){
    int n, m;
    cin >> n >> m;
    perc(n, m);
    return 0;
}