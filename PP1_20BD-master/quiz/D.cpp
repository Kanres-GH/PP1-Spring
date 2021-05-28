#include <iostream>
using namespace std;
int a,n,b,ans,lasttwo,firsttwo;
int main()
{
    cin >> a >> b;
    cout << "Usual division: " << (double)a/b << endl;
    cout << "Division without remainder: " << a/b << endl;
    cout << "Remainder: " << a%b;
}