#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,l=-1;
        cin>>n>>a;
        char k = '0' + a;
        string s;
        cin>>s;
        string ans = "";
        bool flag = false;
        for(int i=0;i<n;i++){
            if(!flag && s[i] < k){
                ans += k;
                flag = true;
                ans += s[i];
            }
            else ans += s[i];
        }
        if(!flag) ans += k;
        cout << ans << endl;
    }
}