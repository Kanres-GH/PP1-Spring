#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<(n/8%2*1)+(n/4%2*2)+(n/2%2*4)+(n/1%2*8);
    return 0;
}