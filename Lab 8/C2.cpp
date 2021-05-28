#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin >> x >> y;

    reverse(v.begin() + x, v.begin() + 1 + y);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}