#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        string s;
        cin >> s;
        string p = "314159265358979323846264338327";
        for (int i = 0; i < 30; i++)
        {
            if (s[i] == p[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout << c << endl;
    }
}