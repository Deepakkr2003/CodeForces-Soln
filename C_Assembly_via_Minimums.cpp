#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = INT_MIN;
        cin >> n;
        int x = (n * (n - 1)) / 2;
        int b[x];
        set<int> s;
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
            if (b[i] > p)
            {
                p = b[i];
            }
            s.insert(b[i]);
        }
        int l = s.size();
        if (l == 1)
        {
            while (n--)
            {
                for (auto it : s)
                {
                    cout << it << " ";
                }
            }
            cout << endl;
        }
        else
        {

            for (auto it : s)
            {
                cout << it << " ";
            }
            cout << p + 1 << endl;
        }
    }
}