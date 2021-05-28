#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.insert(a);
    }
    
    cout << v.size();
}