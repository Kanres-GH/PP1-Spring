#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[100000];
    cin>>n;
    long long sum = 0;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}