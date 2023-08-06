#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 0, q = 0;
        cin >> n;
        int a[n];
        vector<int> v;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            v.push_back(a[i]);
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int t = v[1];
        v[1] = v[n - 1];
        v[n - 1] = t;
        int l = m.size();
        if (l == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}