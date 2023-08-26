#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>x;
            v[i%k]=max(v[i%k],x);
        }
        long long ans=0;
        for(auto it:v){
            ans+=it;
        }
        cout<<ans<<endl;
    }
}