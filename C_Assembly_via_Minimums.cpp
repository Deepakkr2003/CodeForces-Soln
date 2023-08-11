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
        int x = (n * (n - 1)) / 2;
        int b[x];
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        sort(b, b + x);
        for (int i = 0; i < x; i += --n)
        {
            cout << b[i] << " ";
        }
        cout << b[x - 1] << endl;
        }
}