#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> even, odd;
    int n, k;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> k;
        if(k % 2 == 0){
            even.push_back(k);
        } else {
            odd.push_back(k);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    for(int i = even.size() - 1; i >= 0; --i){
        cout << even[i] << " ";
    }
    for(int i = 0; i < odd.size(); ++i){
        cout << odd[i] << " ";
    }
    return 0;
}