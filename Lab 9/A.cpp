#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
multimap <int, int> mm;
int n, x, y;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> x >> y;
    mm.insert(make_pair(x, y));
}
for(multimap <int , int> :: iterator it = mm.begin(); it != mm.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
}
return 0;
}