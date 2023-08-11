#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int r = -1, l = -1, m = 0, d = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                l = i;
                m++;
            }
            else if (r == -1)
            {
                r = i;
            }
        }

        if (m == n || m == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << r << endl;
        }
    }
}