#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>s(n),u(n);
        vector<long long>ans;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>u[i];
        }
        ans.push_back(u[0]-s[0]);
        for(int i=1;i<n;i++){
            
            if(s[i]>u[i-1]){
                ans.push_back(u[i]-s[i]);
            }
            else{
                ans.push_back(u[i]-u[i-1]);
            }
            
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}