#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int res = 0;
int a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
} 
for(int i=0;i<n;i++){
    if(a[i]%10==7){
        res++;
    }
}
cout<<res;
  return 0;
}