#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p=0,q=0;
        cin>>n;
        vector<int>v(n),o,e;
        for(int i=0;i<n;i++){
            cin>>v[i]; 
            if(v[i]%2){
                o.push_back(v[i]);
                p++;
            }
            else{
                e.push_back(v[i]);
                q++;
            }
        }
        if(p==n || q==n){
            cout<<"YES"<<endl;
        }
        
    }
}