#include <iostream>
using namespace std;
 
int main()
{
    int n, antonCnt = 0, danikCnt = 0;    
    char vote;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> vote;
        switch(vote)
        {
            case 'A':
            antonCnt++;
            break;
            
            case 'D':
            danikCnt++;
            break;
            
            default:
            break;
        }
    }
    
    if (antonCnt > danikCnt)
    {
        cout << "Anton";
    }
    else if (danikCnt > antonCnt)
    {
        cout << "Danik";
    }
    else 
    {
        cout << "Friendship";
    }
    
    return 0;
}