#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int n;
int z = 0;
cin>>n;
for(int i=0;i<n;++i){
    int x;
    cin>>x;
       while(x!=0){
    if(x%10==0)
        ++z;
        x/=10;
}
}
cout<<z;
  return 0;
}