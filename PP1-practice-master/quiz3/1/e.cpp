#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
