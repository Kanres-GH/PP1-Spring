#include <iostream>
#include <string>
using namespace std;
bool isSubstring(string s1, string s2){
    int m = s1.size();
    int n = s2.size();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++)
            if (s2[i + j] != s1[j])
                break;
        if (j == m)
            return true;
    }
    return false;
}
int main(){
    string str1, str2, result_str_1 = "", result_str_2 = "";
    cin >> str1 >> str2;
    
    if(isSubstring(str1, str2)){
        cout << str2;
    }
    else if(isSubstring(str2, str1)){
        cout << str1;
    } else {
        int i = 0;
        if(str1[0] == str2[0]){
            result_str_1 += str1[0];
            i = 1;
        }
        while(str1[i] != str2[0]){
            result_str_1 += str1[i];
            if(i == str1.size() - 1){
                break;
            } else {
                i++;
            }
        }
        while(i < str1.size()){
            if(str1[i + 1] == str1[i] && str1[i + 1] == str2[0]){
                result_str_1 += str1[i + 1];
                i++;
            } else {
                break;
            }
        }
        result_str_1 += str2;
        i = 0;
        if(str1[0] == str2[0]){
            result_str_2 += str1[0];
            i = 1;
        }
        while(str2[i] != str1[0]){
            result_str_2 += str2[i];
            if(i == str2.size() - 1){
                break;
            } else {
                i++;
            }
        }
        while(i < str2.size()){
            if(str2[i + 1] == str2[i] && str2[i + 1] == str1[0]){
                result_str_2 += str2[i + 1];
                i++;
            } else {
                break;
            }
        }
        result_str_2 += str1;

        //cout << result_str_1 << " - " << result_str_1.size() << " characters" << endl << result_str_2 << " - " << result_str_2.size() << " characters" << endl << endl;
        if(result_str_1.size() == result_str_2.size()){
            cout << result_str_1;
        } else {
            if((isSubstring(str1, result_str_1) && isSubstring(str2, result_str_1)) && (isSubstring(str1, result_str_2) && isSubstring(str2, result_str_2))){
                if(result_str_2.size() > result_str_1.size()){
                    cout << result_str_1;
                } else {
                    cout << result_str_2;
                }
            }
            else if(isSubstring(str1, result_str_1) && isSubstring(str2, result_str_1)){
                cout << result_str_1;
            } else {
                cout << result_str_2;
            }
        }
    }
    return 0;
}