#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt = 0;
        int j = 0 , ans = 1e7;
        for(int i=0 ; i<n ; i++)
        {
            //using sliding window
            if(s[i] == 'W') cnt++;
            if( i >= k -1)
            {
                ans = min(ans,cnt);
                if(s[j] == 'W') cnt--;
                j++;
            }
        }
        cout << ans << endl;
    }
}