#include <bits/stdc++.h>
using namespace std;
string s1, s2;
map <string,string> m1;
multimap <string,string> m2;
int n;  
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        if(m1.find(s1) == m1.end()){
            m1[s2] = s1;
        } else {
            m1[s2] = m1[s1];
            m1.erase(s1);
        }
    }
    for(auto i : m1){
        m2.insert(make_pair(i.second, i.first));
    }
    cout << m2.size() << endl;
    for(auto i : m2){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}