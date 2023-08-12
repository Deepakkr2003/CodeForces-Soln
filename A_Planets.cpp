#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=0;
        for(auto x:m){
            if(x.second>1 && c>x.second){
                ans+=x.second;
            }
            else if(x.second>1){
                ans+=c;
            }
            else{
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
}