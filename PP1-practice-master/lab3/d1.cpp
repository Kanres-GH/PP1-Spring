#include <iostream>

using namespace std;

int main(){
    int n, maxi = INT32_MIN, pos = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x > maxi){
            maxi = x;
            pos = i + 1;
        }
    }
    cout << pos;
    return 0;
}