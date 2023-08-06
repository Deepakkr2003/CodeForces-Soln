#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        int l = m.size();
        if (l == 1)
        {
            cout << "NO" << endl;
        }
        else if (l > 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (auto it : m)
            {
                if (it.second == 1)
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}