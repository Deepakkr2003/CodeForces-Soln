#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            sum += a;
        }

        cout << abs(sum) << endl;
    }
}