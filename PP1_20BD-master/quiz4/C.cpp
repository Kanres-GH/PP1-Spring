#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
string v,s;
int main()
{
    cin >> v;
    s=v;
    sort(v.begin(),v.end());
    cout << "The anagram variants for string "<< s << " are:\n";
    cout << v << endl;
    while(next_permutation(v.begin(), v.end()))
    {
        cout << v;
        cout << "\n";
    }
    
    return 0;
}