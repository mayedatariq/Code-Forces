#include <iostream>
using namespace std;
 
bool isDistinct(int a)
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
       arr[i] = a % 10;
       a = a / 10;
    }
    if (arr[0] == arr[1])
    {
        return false;
    }
    else if (arr[2] == arr[1] || arr[2] == arr[0])
    {
        return false;
    }
    else if (arr[3] == arr[2] || arr[3] == arr[1] || arr[3] == arr[0])
    {
        return false;
    }
    else
    {
        return true;
    }
}
 
int main()
{
    int n;
    cin >> n;
    n++;
    while (!(isDistinct(n)))
    {
        n++;
    }
 
    cout << n;
    return 0;
}