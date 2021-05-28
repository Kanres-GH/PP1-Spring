#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100000], b[100000], c[200000];
	int n, m, i, j;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a[i];
        c[i] = a[i];
    }
    j = i;
    cin>>m;
    for(i=0; i<m; i++){
        cin>>b[i];
        c[j] = b[i];
        j++;
    }
    sort(c, c+j);
    for(i=0; i<j; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}