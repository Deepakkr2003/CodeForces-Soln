#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=n;
        vector<long long>v(n);
        set<long long>s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        sort(begin(v),end(v),greater<long long>());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long p=v[i]-v[j];
                if(s.find(p)==s.end()){
                    s.insert(p);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}