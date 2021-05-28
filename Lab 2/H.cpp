#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int odd = 0;
int even = 0;
int a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
} 
for(int i=0;i<n;i++){
    if(a[i]%2==0){
        even++;
    } else
    odd++;
}
cout<<even<<" "<<odd;
  return 0;
}