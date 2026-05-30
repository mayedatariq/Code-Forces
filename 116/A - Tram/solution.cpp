#include <iostream>
using namespace std;
 
int main()
{
    int n, a, b, capacity = 0, maxCapacity = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        capacity = capacity - a + b;
        if (maxCapacity < capacity)
        {
            maxCapacity = capacity;
        }
        
    }
    cout << maxCapacity;
 
    return 0;
}