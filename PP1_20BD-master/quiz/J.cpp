#include <iostream>
using namespace std;
double a,b,c,ans;
double a1;
int main()
{
    cin >> a >> b >> c;
    if(a>c)
    {
        cout << 0;
        return 0;
    }
    int j=0;
    for(int i=1;j<=1;i++)
    {
        a1=(int)a;
        ans= a1*(b/100);
        a+=ans;
        if(a>=c)
        {
            cout << i;
            return 0;
        }
    }
}