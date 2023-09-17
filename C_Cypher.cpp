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
        int l=0;
        while(n--){
            int b;
            string s;
            cin>>b>>s;
            for(int i=0;i<b;i++){
                if(s[i]=='D'){
                    if(v[l]==9){
                        v[l]=0;
                    }
                    else{
                        v[l]++;
                    }
                }
                if(s[i]=='U'){
                    if(v[l]==0){
                        v[l]=9;
                    }
                    else{
                        v[l]--;
                    }
                }
            }
            ans.push_back(v[l]);
            l++;
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}