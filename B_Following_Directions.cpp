#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                x++;
            else if (s[i] == 'D')
                x--;
            else if (s[i] == 'R')
                y++;
            else
                y--;
            if (x == 1 && y == 1)
            {
                c++;
                break;
            }
        }
        if (c > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}