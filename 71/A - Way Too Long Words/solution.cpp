#include <iostream>
using namespace std;
 
void copyString(char p[], const char q[])
{
    int n = 0;
    while (q[n] != 0)
    {
        p[n] = q[n];
        n = n + 1;
    }
    p[n] = '\0';
}
 
int getLength(char p[])
{
    int n = 0;
    while (p[n] != 0)
    {
        n = n + 1;
    }
    return n;
}
 
int getTerminator(char p[])
{
    int n = 0;
    while (p[n] != 0)
    {
        n = n + 1;
    }
    return n;
}
 
void abbreviate(char p[], int size)
{
    if (size == 11)
    {
        *(p + 1) = '9';
        *(p + 2) = p[size - 1];
        *(p + 3) = '\0';
    }
    else
    {
        int num;
        num = size - 2;
        int firstDigit = num / 10;
        int secondDigit = num % 10;
        char firstChar = firstDigit + 48;
        char secondChar = secondDigit + 48;
        p[1] = firstChar;
        p[2] = secondChar;
        p[3] = p[size - 1];
        p[4] = '\0';
 
    }
}
 
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char enteredString[101];
    char outputString[1001] = { '\0' };
    for (int cnt = 1; cnt <= n; cnt = cnt + 1)
    {
        cin.getline(enteredString, 101);
        if (getLength(enteredString) > 10)
        {
            abbreviate(enteredString, getLength(enteredString));
        }
        int i = getTerminator(outputString);
        if (cnt > 1)
        {
            outputString[i] = '
';
            copyString(outputString + i + 1, enteredString);
        }
        else
        {
            copyString(outputString, enteredString);
        }
    }
    cout << outputString;
 
    return 0;
}