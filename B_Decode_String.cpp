#include <bits/stdc++.h>
#include <string>
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
        string ans = "";
        char b;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                string a = "";
                a += s[i - 2];
                a += s[i - 1];
                int d = stoi(a);
                b = 'a' + d - 1;
                ans += b;
                i = i - 2;
            }
            else
            {
                string a = "";
                a += s[i];
                int d = stoi(a);
                b = 'a' + d - 1;
                ans += b;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}