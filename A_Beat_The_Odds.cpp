#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, d = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        int m = max(c, d);
        if (c == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - m << endl;
        }
    }
}