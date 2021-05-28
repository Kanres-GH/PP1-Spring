#include <bits/stdc++.h>
using namespace std;
int n;
string ans;
int bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    bin(n/2);
    cout << n%2;

}
int main()
{
    cin >> n;
    bin(n);
}