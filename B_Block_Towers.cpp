#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[0] < a[i])
            {
                a[0] = (a[0] + a[i] + 1) / 2;
            }
        }
        cout << a[0] << endl;
    }
}
