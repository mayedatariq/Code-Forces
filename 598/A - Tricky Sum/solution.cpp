#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    long long int n;
    
    cin >> t;
    
    for (int i = 1; i <= t; i = i + 1)
    {
        cin >> n;
        
        long long int sum = (n * (n + 1)) / 2;
        long long int subtractor = 1, subtractorSum = 1;
        
        while (subtractor * 2 <= n)
        {
            subtractor = subtractor * 2;
            subtractorSum = subtractorSum + subtractor;
        }
        
        sum = sum - (2 * subtractorSum);
        
        cout << sum << '
';
    }
    return 0;
}