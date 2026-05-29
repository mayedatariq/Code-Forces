#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s, t;
    cin >> s >> t;
    if (s.length() == t.length())
    {
        bool correctStatus = true;
        int i = 0;
        while (correctStatus && (i < s.length()))
        {
            if (s[i] != t[s.length() - 1 - i])
            {
                correctStatus = false;
            }
            i++;
        }
        if (correctStatus)
        {   
            cout << "YES" << '
';
        }
        else
        {
            cout << "NO" << '
';
        }
    }
    else
    {
        cout << "NO" << '
';
    }
    
 
    return 0;
}