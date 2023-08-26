#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>ans;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        while(n--){
            int b;
            cin>>b;
            string s;
            cin>>s;
            for(int i=0;i<b;i++){
                if(s[i]=='D'){
                    if(v[i]==9){
                        v[i]=0;
                    }
                    else{
                        v[i]++;
                    }
                }
                if(s[i]=='U'){
                    if(v[i]==0){
                        v[i]=9;
                    }
                    else{
                        v[i]--;
                    }
                }
                ans.push_back(v[i]);
            }
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}