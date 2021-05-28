#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000];
    int max, ind = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        max = a[0];
    }
    for(int i=0;i<n;++i){
        if(a[i]>max){
            max=a[i];
            ind = i;
        }
    } cout<<ind+1;
    return 0;
}