#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'G' && s2[i] == 'R') || (s1[i] == 'B' && s2[i] == 'R') || (s1[i] == 'R' && s2[i] == 'B') || (s1[i] == 'R' && s2[i] == 'G'))
            {
                c++;
            }
        }
        if (c > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
