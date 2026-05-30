#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int oneCnt = 0, twoCnt = 0, threeCnt = 0;
    string str1;
    cin >> str1;
    int str1Length = str1.length();
    for (int i = 0; i < str1Length; i++)
    {
        switch (str1[i])
        {
            case '1':
            oneCnt++;
            break;
            case '2':
            twoCnt++;
            break;
            case '3':
            threeCnt++;
            break;
            default:
            break;
        }
    }
    int i = 0;
    string str2 (str1Length, '\0');
    for (int j = 1; j <= oneCnt; j++)
    {
        str2[i] = '1';
        str2[i + 1] = '+';
        i = i + 2;
    }
    for (int j = 1; j <= twoCnt; j++)
    {
        str2[i] = '2';
        str2[i + 1] = '+';
        i = i + 2;
    }
    for (int j = 1; j <= threeCnt; j++)
    {
        str2[i] = '3';
        str2[i + 1] = '+';
        i = i + 2;
    }
    str2[i - 1] = '\0';
    cout << str2;
 
    return 0;
}