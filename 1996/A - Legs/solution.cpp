#include <iostream>
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int animalCnt = 0;
        cin >> n;
        int j = 4;
        while (n != 0)
        {
            if (n >= j)
            {
                n = n - j;
                animalCnt = animalCnt + 1;
            }
            else
            {
                j = 2;
            }
        }
        cout << animalCnt << endl;
    }
 
    return 0;
}