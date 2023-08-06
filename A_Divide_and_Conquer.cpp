#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0, c = 0, p = INT_MAX, q = 0;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int temp = a[i];
                do
                {
                    temp = temp / 2;
                    q += temp;
                    c++;
                    if (c < p)
                    {
                        p = c;
                    }
                } while (q % 2 != 0);
            }
            cout << p << endl;
        }
    }
}