#include <iostream>
using namespace std;
 
int countLuckyDigits(long long int num)
{
    int luckyCnt = 0;
    while (num != 0)
    {
        if (num % 10 == 7 || num % 10 == 4)
        {
            luckyCnt++;
        }
        num = num / 10;
    }
    return luckyCnt;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int num;
    cin >> num;
    if (countLuckyDigits(num) == 7 || countLuckyDigits(num) == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}