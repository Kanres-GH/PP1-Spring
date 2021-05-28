#include<iostream>
using namespace std;
int main(){
    int n,m,i;
    int position=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i-1]<=m && a[i]>m){
                position=n;
                cout<<i;
                return 0;
        }
        //else if(a[i]!=m){
          //  position=n;
            //cout<<position;
            //break;
        //}
    }
    cout << n;
    /*for(i=n-1;i>=0;i--){
        if (a[i]<m && a[i+1]>m){
            position=i+1;
            cout<<position<<" ";
            break;
        }
    }*/
}