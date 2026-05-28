#include <iostream>
using namespace std;
 
int main()
{
    int n, implementCnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, friendCount = 0;
        for (int i = 1; i <= 3; i++)
        {
            cin >> a;
            switch(a)
            {
                case 1:
                friendCount++;
                break;
                default:
                break;
            }
        }
        if (friendCount >= 2)
        {
            implementCnt++;
        }
    }
    cout << implementCnt;
    
    return 0;
}