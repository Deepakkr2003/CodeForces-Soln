#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        char prev = s[0];
        for (int i = 1; i < n; i++)
        {
            if (prev == '1' && s[i] == '1')
            {
                cout << "-";
                prev = '0';
            }
            else if (prev == '0' && s[i] == '0')
            {
                cout << "+";
            }
            else
            {
                cout << "+";
                prev = '1';
            }
        }
        cout << endl;
    }
}