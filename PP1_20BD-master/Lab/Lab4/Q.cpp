#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= 2*n-1;j++)
        {
            if(j<=n-i)
            {
                cout << ".";
                continue;
            }
            else
            if(j>n-i && j<n+i)
            {
                cout << "*";
                continue;
            }
            cout << ".";
        }
        cout << "\n";
    }
}