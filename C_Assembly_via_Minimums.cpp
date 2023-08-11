#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ti;
    cin >> ti;
    while (ti--)
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