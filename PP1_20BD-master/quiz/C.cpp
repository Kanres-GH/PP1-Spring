#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
double a,n,b,xo,xt,yo,yt,yte,xte;
int main()
{
    cin >> xo >> yo >> xt >> yt;
    xte = xt-xo;
    yte = yt - yo;
   double ans = sqrt((xte*xte)+(yte*yte));
    cout << fixed << setprecision(10) << ans << '\n';
}