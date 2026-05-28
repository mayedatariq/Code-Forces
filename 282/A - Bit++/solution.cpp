#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int x = 0, n;
    cin >> n;
    string str;
    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        if (str.find('+') < 3)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x;
    
 
    return 0;
}