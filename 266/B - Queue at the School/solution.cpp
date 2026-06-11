#include <iostream>
#include <string>
using namespace std;
 
bool isSorted(string a, int n)
{
    int i = 0;
    bool flag = true;
    while (flag && i < n)
    {
        if (a[i] == 'B' && a[i + 1] == 'G')
        {
            flag = false;
        }
        i++;
    }
    
    return flag;
}
 
int main()
{
    int n, t;
    cin >> n >> t;
    string output;
    cin >> output;
    bool flag = 1;
    
    while (t != 0 && !isSorted(output, n))
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            if (output[i] == 'B' && output[i + 1] == 'G')
            {
                swap(output[i], output[i + 1]);
                flag = 0;
            }
            else
            {
                i = i - 1;
            }
        }
        
        if (!flag)
        {
            t--;
            flag = 1;
        }
    }
    
    cout << output;
    
    return 0;
}