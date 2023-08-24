#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v;
        while(n--){
            string s;
            cin>>s;
            v.push_back(s);
        }
        int l=v.size();
        int ans=INT_MAX;
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                int p=0;
                for(int k=0;k<m;k++){
                    p+=abs(v[i][k]-v[j][k]);
                    
                }
                
                ans=min(ans,p);
            }
            
        }
        cout<<ans<<endl;
    }
}