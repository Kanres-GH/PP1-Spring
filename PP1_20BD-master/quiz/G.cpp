#include <iostream>
using namespace std;
int n,avg,a[111111];
string s;
int main()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> a[i];
        avg+=a[i];
    }
    cout << "Average: " << (double)avg/n << endl;
    cout << "Sum: " << avg;
}