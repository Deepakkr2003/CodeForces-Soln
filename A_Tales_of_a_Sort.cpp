#include <bits/stdc++.h>
using namespace std;
int checkSort(int c)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, p = 0;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (c == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i] - 1;
                checkSort(c);
                p++;
            }
        }
    }
}