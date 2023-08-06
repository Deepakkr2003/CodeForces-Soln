#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, m = INT_MAX;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < m)
            {
                m = a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            int p = a[i] - m;
            sum += p;
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}