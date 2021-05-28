#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<long long>a(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<long long>b(n);
    long long maximum = 0;
    for(long long i=1; i<n; i++)
    {
        b[i] = a[i] - a[i-1];
        if (b[i]>maximum)
            maximum = b[i];
    }
    for (long long i=0; i<n-2; i++)
    {
        if (a[i]+maximum>=a[i+2])
        {
            cout << "0";
            return 0;
        }
    }
    cout << maximum << endl;
}