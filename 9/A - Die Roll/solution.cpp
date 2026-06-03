#include <iostream>
using namespace std;
 
int main()
{
    int y, w, n;
    cin >> y >> w;
    if (y > w)
    {
        n = y;
    }
    else
    {
        n = w;
    }
    n = 6 - n + 1;
    
    if (n == 4)
    {
        cout << "2/3";
    }
    else if (6 % n != 0)
    {
        cout << n << '/' << 6;
    }
    else
    {
        cout << 1 << '/' << 6 / n;
    }
 
    return 0;
}