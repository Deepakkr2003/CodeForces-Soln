#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = -1;
        cin >> n;
        int a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto it : m)
        {
            if (it.second >= 3)
            {
                p = it.first;
            }
        }
        cout << p << endl;
    }
}