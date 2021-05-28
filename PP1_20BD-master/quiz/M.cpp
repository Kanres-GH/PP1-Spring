#include <iostream>
#include <iomanip>
using namespace std;
int n;
double m;
int main()
{
    cin >> n >> m;
    //cout << (float)n+(n*(m/100));
    cout << fixed << setprecision(2) << (double)n+(n*(m/100)) << '\n';
}