#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long dist1;
        if (c > b)
            dist1 = c - b + c - 1;
        else
            dist1 = b - 1;
        long long dist2 = a - 1;
        if (dist2 > dist1)
            cout << 2 << endl;
        else if (dist2 < dist1)
            cout << 1 << endl;
        else
            cout << 3 << endl;
    }
}