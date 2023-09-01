#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        int sum = 0, last = 9;
        while (sum < n && last > 0) {
        ans.push_back(min(n - sum, last));
        sum += last;
        last--;
        }
        if (sum < n) {
        cout << -1 << "\n";
        }
        else {
            reverse(ans.begin(), ans.end());
            for (int i : ans) {
                cout << i;
            }
            cout << "\n";
        }
    }
}