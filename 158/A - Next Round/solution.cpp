#include <iostream>
using namespace std;
 
int main()
{
    int nextCnt = 0, inputCnt = 0, n, k, a;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a;
        if (a > 0)
        {
            nextCnt++;
        }
        inputCnt++;
    }
    int b;
    while (n > inputCnt)
    {
        cin >> b;
        if (b > 0 && b == a)
        {
            nextCnt++;
        }
        inputCnt++;
    }
    cout << nextCnt;
    
 
    return 0;
}