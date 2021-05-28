#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, m;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    cout << max - min;
    return 0;
}