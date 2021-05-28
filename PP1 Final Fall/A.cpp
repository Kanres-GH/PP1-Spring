#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1, c2, c5, c10, c20, c50, c100;
    cin >> c1 >> c2 >> c5 >> c10 >> c20 >> c50 >> c100;
    map <int, int, greater<int>> types = {{1 , c1}, 
                                         {2 , c2}, 
                                         {5 , c5}, 
                                         {10 , c10}, 
                                         {20 , c20}, 
                                         {50 , c50}, 
                                         {100 , c100}}, temp;
    temp = types;
    int n;  
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        bool isEmpty = false;
        for(auto k : types){
            while(types[k.first] > 0 && num - k.first >= 0){
                num -= k.first;
                types[k.first]--;
            }
            if(num == 0){
                cout << "Transaction accepted!" << endl;
                isEmpty = true;
                temp = types;
                break;
            }
        }
        if(isEmpty == false){
            types = temp;
            cout << "Transaction stopped!" << endl;
        }
    }
    return 0;
}