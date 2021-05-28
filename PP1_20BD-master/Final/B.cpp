#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i = 1;i<n;i++)
    {
        for(int j=0;j<n+n-i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i*2-1;j++)
        {
            if(j==0)
            {
                cout << "*";
                continue;
            }
            if(j==i*2-2)
            {
                cout << "*";
                continue;
            }
            cout << " ";
        }
        for(int j=0;j<n+n-i;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout << " ";
    }
    for(int i=1;i<n+n;i++)
    {
        cout << "*";
    }
    for(int i=1;i<=n;i++)
    {
        cout << " ";
    }
    cout << endl;
    for(int i = 1;i<n;i++)
    {
        for(int j =0; j<n-i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i*2-1;j++)
        {
            if(j==0)
            {
                cout << "*";
                continue;
            }
            if(j==i*2-2)
            {
                cout << "*";
                continue;
            }
            cout << " ";
        }
        for(int j =0; j<=(n-i)*2;j++)
        {
            cout << " ";
        }
        for(int j=0;j<i*2-1;j++)
        {
            if(j==0)
            {
                cout << "*";
                continue;
            }
            if(j==i*2-2)
            {
                cout << "*";
                continue;
            }
            cout << " ";
        }
        for(int j =0; j<=n-i;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0;i<n*4-1;i++)
    {
        if(i==n*2-1)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
        
    }
}