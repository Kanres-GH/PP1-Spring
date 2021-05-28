#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    vector<int> t;
    for(int i=0;i<n;i++){
        string s; int x; cin>>s>>x;
        v.push_back(s);
        t.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(t.begin(),t.end());
    
    for(int i=0;i<t.size();i++){
        cout<<v[i]<<" "<<t[i]<<endl;
    }
}