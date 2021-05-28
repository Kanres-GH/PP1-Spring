#include<iostream>
using namespace std;
int main(){
    int n, max = -10e9;
    cin>>n;
    int a[100000];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        if(a[i]>max){
            max=a[i];
        }
    } cout<<max;
    return 0;
}