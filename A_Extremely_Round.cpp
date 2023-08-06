#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 0;
        cin >> n;
        if (n <= 9)
        {
            cout << n << endl;
        }
        else if (n >= 10 && n <= 99)
        {
            p = n / 10;
            cout << (9 + p) << endl;
        }
        else if (n >= 100 && n <= 999)
        {
            p = n / 100;
            cout << (18 + p) << endl;
        }
        else if (n >= 1000 && n <= 9999)
        {
            p = n / 1000;
            cout << (27 + p) << endl;
        }
        else if (n >= 10000 && n <= 99999)
        {
            p = n / 10000;
            cout << (36 + p) << endl;
        }
        else
        {
            p = n / 100000;
            cout << (45 + p) << endl;
        }
    }
}
