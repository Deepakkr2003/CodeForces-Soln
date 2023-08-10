#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        string ans = "";
        char b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // if (a[i + 2] == 0)
            // {
            //     b = 10 + a[i + 1] + 96;
            //     ans += b;
            // }
            // else
            b = a[i] + 96;
            ans += b;
        }
        cout << ans << endl;
    }
}