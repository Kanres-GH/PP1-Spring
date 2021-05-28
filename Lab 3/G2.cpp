#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n];
int max, min;
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
min = arr[0];
for(int i = 0; i < n; i++){
    if(arr[i] < min){
        min = arr[i];
    }
}
max = INT_MIN;
for(int i = 0; i < n; i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
for(int i = 0; i < n; i++){
    if(arr[i] == max){
        arr[i] = min;
    }
}
for(int i = 0; i < n; i++){
    cout << arr[i] <<" ";
}
    return 0;
}