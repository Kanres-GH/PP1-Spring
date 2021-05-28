#include <bits/stdc++.h>
using namespace std;
int a[10],n,m,b[10];
bool ok = true;
int main()
{
    for(int i =1;i<=7;i++)
    {
        cin >> a[i];
    }
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> m;
        for(int j=1;j<=7;j++)
        {
            b[j]=a[j];
        }
        while(m!=0)
        {
            if(m-100>=0 && a[7]!=0)
            {
                m-=100;
                a[7]--;
                continue;
            }
            else
            if(m-50>=0 && a[6]!=0)
            {
                m-=50;
                a[6]--;
                continue;
            }
            else
            if(m-20>=0 && a[5]!=0)
            {
                m-=20;
                a[5]--;
                continue;
            }
            else
            if(m-10>=0 && a[4]!=0)
            {
                m-=10;
                a[4]--;
                continue;
            }
            else
            if(m-5>=0 && a[3]!=0)
            {
                m-=5;
                a[3]--;
                continue;
            }
            else
            if(m-2>=0 && a[2]!=0)
            {
                m-=2;
                a[2]--;
                continue;
            }
            else
            if(m-1>=0 && a[1]!=0)
            {
                m-=1;
                a[1]--;
                continue;
            }
            else
            {
                cout << "Transaction stopped!\n";
                for(int g=1;g<=7;g++)
                {
                    a[g]=b[g];
                }
                ok=false;
                break;
            }
            
        }
        if(ok)cout << "Transaction accepted!\n";
        ok=true;
    }
}