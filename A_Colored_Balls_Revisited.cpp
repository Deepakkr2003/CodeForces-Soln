#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0, j = -1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > m)
            {
                m = a[i];
                j = i;
            }
        }
        cout << j + 1 << endl;
    }
}