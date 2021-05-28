#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    map <int, int, greater<int>> mappa;
    map <int, int, greater<int>> mappa1;
    mappa[1] = a;
    mappa[2] = b;
    mappa[5] = c;
    mappa[10] = d;
    mappa[20] = e;
    mappa[50] = f;
    mappa[100] = g;
    mappa1 = mappa;
    int x;
    cin >> x;
    while(x--){
        int ad;
        cin >> ad;
        bool flag = false;
        for(auto g : mappa){
            while(mappa[g.first] > 0 && ad - g.first >= 0){
                ad -= g.first;
                mappa[g.first]--;
            }
            if(ad == 0){
                cout << "Transaction accepted!" << endl;
                flag = true;
                mappa1 = mappa;
                break;
            }
        }
        if(flag == false){
            mappa = mappa1;
            cout << "Transaction stopped!" << endl;
        }
    }
    return 0;
}