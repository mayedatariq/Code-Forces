#include <iostream>
#include <string>
using namespace std;
 
string convertToLower(string a)
{
    string b = a;
    for (int i = 0; i < a.length(); i = i + 1)
    {
        b[i] = tolower(a[i]);
    }
    return b;
}
 
int main()
{
    string a, b;
    cin >> a >> b;
    a = convertToLower(a);
    b = convertToLower(b);
    if (a.compare(b) == 0)
    cout << 0;
    else if (a.compare(b) < 0)
    cout << -1;
    else
    cout << 1;
    
    return 0;
}