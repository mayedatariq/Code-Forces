#include <iostream>
using namespace std;
 
int main()
{
    int n, stoneCnt = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << '
';
    }
    else
    {
        char prev, next;
        cin >> prev;
        for (int i = 2; i <= n; i++)
        {
            cin >> next;
            if (next == prev)
            {
                stoneCnt++;
            }
            prev = next;
        }
        cout << stoneCnt;
    }
    return 0;
}