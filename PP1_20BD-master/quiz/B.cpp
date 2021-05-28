#include <iostream>
using namespace std;
int a,n,b,ans,lasttwo,firsttwo;
int main()
{
    cin >> b;
    firsttwo = b/100000+(b/10000%10);
    lasttwo=b%10+(b%100/10);
    if(firsttwo==lasttwo)
    {
        cout << "YES";
        //cout << lasttwo << " " << firsttwo;
    }
    else
    {
        cout << "NO";
        //cout << lasttwo << " " << firsttwo;
    }
    
}