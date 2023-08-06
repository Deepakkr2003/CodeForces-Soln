#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, c = 0, p = 0, d = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                c++;
            else
                p++;
            sum += a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == -1 && a[i + 1] == -1)
            {
                d++;
            }
        }
        if (p == n)
        {
            cout << sum - 4 << endl;
        }
        else if (d > 0)
        {
            cout << sum + 4 << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}