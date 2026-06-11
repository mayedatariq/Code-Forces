#include <iostream>
using namespace std;
 
int main()
{
    int n, p, q, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            result++;
        }
    }
    cout << result;
    
    return 0;
}