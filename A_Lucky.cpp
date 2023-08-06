#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0, q = 0;
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            int m = int(s[i]) - 48;
            p += m;
        }
        for (int i = 3; i < 6; i++)
        {
            int n = int(s[i]) - 48;
            q += n;
        }
        if (p == q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}