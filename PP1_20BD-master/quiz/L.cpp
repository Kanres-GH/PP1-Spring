#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    cout << n/3600 <<":" << (n%3600)/60 << ":" << (n%60);
}