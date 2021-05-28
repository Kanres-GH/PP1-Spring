#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long int a[111111],b[111111],l,r,ans,n;
bool prime=true;
int main ()
{
    cin >> n;
    if (n == 0 || n == 1) {
        prime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if(prime)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
}