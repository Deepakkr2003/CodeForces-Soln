#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d = 0, p = 0, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                c++;
            }
        }
        if (c % 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    p++;
                    if (p == (c / 2))
                    {
                        d = i;
                        break;
                    }
                }
            }
            cout << d + 1 << endl;
        }
        }
}