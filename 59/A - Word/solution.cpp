#include <iostream>
#include <string>
using namespace std;
 
int countLowerLetters(string a, int length)
{
    int lowerLetterCnt = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            lowerLetterCnt++;
        }
    }
    return lowerLetterCnt;
}
 
int main()
{
    string str;
    cin >> str;
    int strLength = str.length();
    int lowerLetterCnt = countLowerLetters(str, strLength);
    int capitalLetterCnt = strLength - lowerLetterCnt;
    if (capitalLetterCnt > lowerLetterCnt)
    {
        for (int i = 0; i < strLength; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = toupper(str[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < strLength; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = tolower(str[i]);
            }
        }
    }
    
    cout << str;
 
    return 0;
}