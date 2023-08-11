#include <bits/stdc++.h>
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
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            a[n - 1] *= a[i];
        }
        long long ans = a[n - 1] + (n - 1);
        long long p = ans * 2022;
        cout << p << endl;
    }
}