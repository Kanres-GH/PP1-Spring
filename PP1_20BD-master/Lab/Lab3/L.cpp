#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int l,r,ans,n,m,j=1;
int a[1111111],b[1111111];
 void merge(int m ,int n) 
 {
        for (int i = m + n - 1; i >= 0; i--) 
        {
            if (m <= 0) 
            {
                a[i] = b[--n]; 
            } 
            else if (n <= 0) 
            {
                break;
            } 
            else if (a[m-1] < b[n-1]) 
            {
                a[i] = b[--n];
            } 
            else 
            {
                a[i] = b[--m];
            }
        }
    }
int main ()
{
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for(int i =0;i<m;i++)
    {
        cin >> b[i];
    }
    merge(n,m);
    for(int i=0;i<m+n;i++)
    {
        cout << a[i] << " ";
    }
}