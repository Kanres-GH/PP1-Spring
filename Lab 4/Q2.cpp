#include <bits/stdc++.h>

using namespace std; 
int n, a[1000][1000];
int main()
{
  cin >> n;
  int cnt = 2; 
  int cur = n; 
  for(int i = 1; i <= n; i++){
    for(int j = 1; j < cur; j++){
      cout << ".";
    }
    for(int j = 1; j < cnt; j++){
      cout << "*";
    }
    for(int j = 1; j < cur; j++){
      cout << ".";
    }
    cout << endl;
    cnt += 2;
    cur--;
  }
  return 0;
}