#include <iostream>
using namespace std;
int main()
{
    int a, b, yearCnt = 0;
    cin >> a >> b;
    
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        yearCnt = yearCnt + 1;
    }
 
    cout << yearCnt;
    return 0;
}