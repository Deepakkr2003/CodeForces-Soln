#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, d = 0, p = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                c++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                d++;
            }
        }
        int x = 0;
        int ans = abs(c - d) + 1;
        while (x < n)
        {
            if (a[x] != b[x])
            {
                p++;
            }
            x++;
        }
        ans = min(ans, p);
        cout << ans << endl;
    }
}