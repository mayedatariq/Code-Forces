#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[4];
    int greatest = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
    }
    int i = 0;
    while (a[i] != greatest)
    {
        i++;
    }
    swap(a[0], a[i]);
    
    cout << a[0] - a[1] << ' ' << a[0] - a[2] << ' ' << a[0] - a[3];
    
    return 0;
}