#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        set<char> s;
        s.insert(a[0]);
        s.insert(a[1]);
        s.insert(b[0]);
        s.insert(b[1]);
        int l = s.size();
        cout << l - 1 << endl;
    }
}