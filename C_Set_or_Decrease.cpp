#include<bits/stdc++.h>
 using namespace std;
 #define lli             long long
 #define mod             1000000007
 int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
        lli n , k;
        cin >> n >> k;
        vector<lli> arr(n+1,0);
        lli totalSum = 0;
        for(int i=1 ; i<=n ; i++) {
            cin >> arr[i];
            totalSum += arr[i];
        }
        sort(begin(arr),end(arr));
        lli diff = totalSum - k;
        if(diff <= 0) {
            cout << 0 << endl;
            continue;
        }
        if(totalSum == k + 1) {
            cout << 1 << endl;
            continue;
        }
        lli ans = diff;
        lli sum = 0;
        for(lli i = n ; i>=2 ; i--)
        {
            sum += arr[i];
            lli x ;
            if(sum - arr[1]*(n-i+1) >= diff) x = 0;
            else x = max(( diff - sum + arr[1]*(n-i+1) + n - i + 1 )/( n - i + 2),0ll);
            ans = min( ans , x + n - i + 1LL);
        }
        cout << ans << endl;
     }
     return 0;
 }