#include <iostream>
using namespace std;
int a[111111],n;
int main ()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]%2==1)
        {
            cout << a[i] << " ";
        }
    }
}