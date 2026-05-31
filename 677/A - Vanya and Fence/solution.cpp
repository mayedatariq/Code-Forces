#include <iostream>
using namespace std;
 
int main()
{
    int n, h, a, w;
    cin >> n >> h;
    w = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > h)
        {
            w++;
        }
    }
    cout << w;
    
    return 0;
}