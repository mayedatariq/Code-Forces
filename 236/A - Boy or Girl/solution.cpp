#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string name;
    cin >> name;
    for (int i = name.length() - 1; i > 0; i--)
    {
        if (name.find(name[i]) < i)
        {
            name.erase(i, 1);
        }
    }
    if (name.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    
    return 0;
}