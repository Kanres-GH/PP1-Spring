#include <iostream>
using namespace std;
int a,b,ans,lasttwo,firsttwo,n,m,ans1;
int main()
{
    cin >> a >> b;
    cin >> n >> m;
    ans = (a*100+b)-n*m;
    ans1=ans%100;
    cout << ans/100 << " " << ans1;
}