#include<iostream>
using namespace std;
int main(){
    int n, i, a[100000];
    cin>>n;
    for(i = 0; i<n; ++i){
        cin>>a[i];
    }
    for(i = 0; i<n; ++i){
        cout<<a[i]*a[i]<<" ";
    }
    return 0;
}