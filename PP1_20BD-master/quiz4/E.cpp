#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
int main()
{
    cin >> n;
    for(;;)
    {
        ++n;
        if(n/1000 != n/100%10 && n/1000 != n/10%10 && n/1000 != n%10 && n/100%10 != n/10%10 && n/100%10 != n%10 && n/10%10 != n%10)
        {
            cout<< n;
            break;
        }
    }
}