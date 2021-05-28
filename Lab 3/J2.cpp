#include<iostream>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int ind = 0;
    for(int i = 0; i < n; i++){
        if (t >= a[i]){
            ind += 1;
        }
    } cout << ind << endl;
    return 0;
}