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
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if ((s[i] == '0' && s[j] == '1') || s[i] == '1' && s[j] == '0')
            {
                i++;
                j--;
                n = n - 2;
            }
            else
            {
                break;
            }
        }
        cout << n << endl;
    }
}