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
            else
            {
                r = i;
                break;
            }
        }

        if (m == n || m == 0)
        {
            cout << -1 << endl;
        }
        else if (l < r)
        {
            cout << r << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}