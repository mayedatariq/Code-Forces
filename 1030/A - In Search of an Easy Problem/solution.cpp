#include <iostream>
using namespace std; 
 
int main()
{
    int n, k, sum = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i = i + 1)
    {
        cin >> k;
        sum = sum + k;
    }
    if (sum > 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}