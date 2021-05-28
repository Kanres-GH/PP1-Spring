#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s1, s2, reversed_sum;
        int sum = 0;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int num1 = stoi(s1);
        int num2 = stoi(s2);
        sum = num1 + num2;
        reversed_sum = to_string(sum);
        reverse(reversed_sum.begin(), reversed_sum.end());
        sum = stoi(reversed_sum);
        cout << sum << endl;
    }
    return 0;
}