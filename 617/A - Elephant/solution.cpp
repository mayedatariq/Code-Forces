#include <iostream>
using namespace std;
 
int main()
{
    int x, i = 5, steps = 0;
    cin >> x;
    while (x != 0)
    {
        if (x >= i)
        {
            x = x - i;
            steps = steps + 1;
        }
        else
        {
            i = i - 1;
        }
    }
    cout << steps;
    
 
    return 0;
}