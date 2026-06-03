#include <iostream>
using namespace std;
 
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << '
';
        }
        else
        {
            cout << a + (b * 2) + 1 << '
';
        }
    }
 
    return 0;
}