#include <bits/stdc++.h>
using namespace std;
int Max(int a, int b, int c, int d){
    vector<int> max = {a, b, c, d};
    return *max_element(max.begin(), max.end());
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Max(a, b, c, d);
    return 0;
}