#include <iostream>
using namespace std; 
 
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 1; i <= t; i = i + 1)
    {
        cin >> a >> b;
        a = a - b;
        if (a < 0)
        {
            cout << a * -1 << '
';
        }
        else if (a % b == 0)
        {
            cout << 0 << '
';
        }
        else
        {
            if (a < b)
            {
                cout << b - a << '
';
            }
            else
            {
                while (a >= b)
                {
                    a = a % b;
                }
                int cnt = 0;
                while (a != b)
                {
                    a++;
                    cnt++;
                }
                cout << cnt << '
';
                
            }
        }
    }
    return 0;
}