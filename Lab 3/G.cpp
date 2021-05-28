#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        v.push_back(k);
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == max){
            v[i] = min;
        }
        cout << v[i] << " ";
    }
    return 0;
}