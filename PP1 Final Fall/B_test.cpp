#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << " *\n* *";
    } else {
        for(int i = 0; i < 2 * n - 1; ++i){
            cout << ' ';
        }
        cout << '*' << endl;
        for(int i = 1; i < n - 1; ++i){
            for(int j = 1; j < 2 * n - i; ++j){
                cout << ' ';
            }
            cout << '*';
            for(int j = 0; j < 2 * i - 1; ++j){
                cout << ' ';
            }
            cout << '*' << endl;
        }

        for(int i = 0; i < n; ++i){
            cout << ' ';
        }
        for(int i = 0; i < 2 * n - 1; ++i){
            cout << '*';
        }
        cout << endl;

        for(int i = 0; i < n - 1; ++i){
            cout << ' ';
        }
        cout << '*';
        for(int i = 0; i < 2 * n - 1; ++i){
            cout << ' ';
        }
        cout << '*' << endl;
        for(int i = 1; i < n - 1; ++i){
            for(int j = 0; j < n - i - 1; ++j){
                cout << ' ';
            }
            cout << '*';
            for(int j = 0; j < 2 * i - 1; ++j){
                cout << ' ';
            }
            cout << '*';

            for(int j = 0; j < 2 * n - 2 * i - 1; ++j){
               cout << ' ';
            }
            cout << '*';
            for(int j = 0; j < 2 * i - 1; ++j){
                cout << ' ';
            }
            cout << '*' << endl;
        }

        for(int i = 0; i < 2 * n - 1; ++i){
            cout << '*';
        }
        cout << ' ';
        for(int i = 0; i < 2 * n - 1; ++i){
            cout << '*';
        }
    }
    return 0;
}