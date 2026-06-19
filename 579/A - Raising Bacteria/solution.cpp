#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (!x)
    {
        cout << 0;
    }
    else
    {
        int i = 1;
        while (x > 1)
        {
            if ((x & 1) == 0)
            {
                x = (x >> 1);
            }
            else
            {
                x = x - 1;
                i = i + 1;
            }
        }
        cout << i << '
';
    }
    
    return 0;
}