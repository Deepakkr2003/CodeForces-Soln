#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0, p = 0, c = 0, mi = -1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > m)
            {
                m = a[i];
                mi = i;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                c++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > p && a[i] <= m && i != mi)
            {
                p = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == m && (c == (n - 1)))
            {
                cout << (a[i] - m) << " ";
            }
            else if (a[i] == m)
            {
                cout << (m - p) << " ";
            }
            else
            {
                cout << (a[i] - m) << " ";
            }
        }
        cout << endl;
    }
}