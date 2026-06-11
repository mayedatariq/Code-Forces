#include <iostream>
using namespace std;
 
int main()
{
    int n, p, q, result = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        cin >> p;
        n--;
        for (int i = 1; i <= n; i++) 
        {
            cin >> q;
            if (q != p)
            {
                result++;
                p = q;
            }
        }
        cout << result;
    }
    
    return 0;
}