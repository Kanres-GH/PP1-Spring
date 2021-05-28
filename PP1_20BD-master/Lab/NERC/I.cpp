#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i =1;i<=n+1/2;i++)
    {
        int sr=sqrt(n-i);
        int st=sqrt(i);
        if(sr==floor(sr)&& st==floor(st))
        {
            if(sr*sr+st*st==n)
            {
                cout << 0 << " " << 0 << endl;
                cout << 0-st << " " << 0+sr << endl;
                cout << 0-st+sr << " " << 0+sr+st << endl;
                cout << 0+sr << " " << 0+st << endl;
                return 0;
            }   
        }
    }
    cout << "Impossible";
}