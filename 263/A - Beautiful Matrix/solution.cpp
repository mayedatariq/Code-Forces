#include <iostream>
using namespace std;
 
int main()
{
    int cnt = 0, result;
    bool a = 0;
    while(!a)
    {
        cin >> a;
        cnt++;
    }
    switch (cnt)
    {
        case 1:
        case 5:
        case 21:
        case 25:
        result = 4;
        break;
        case 13:
        result = 0;
        break;
        case 8:
        case 12:
        case 14:
        case 18:
        result = 1;
        break;
        case 2:
        case 4:
        case 6:
        case 10:
        case 16:
        case 20:
        case 22:
        case 24:
        result = 3;
        break;
        default:
        result = 2;
        break;
    }
    cout << result;
 
    return 0;
}