#include <iostream>
using namespace std;
 
int main()
{
    int k, n, w, total = 0, m = 1;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        total = total + (k * m);
        m = m + 1;
    }
    if (total > n)
    {
        cout << total - n << '
';
    }
    else
    {
        cout << 0 << '
';
    }
 
    return 0;
}