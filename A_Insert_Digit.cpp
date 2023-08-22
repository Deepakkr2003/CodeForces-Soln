#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l=-1;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<char>v;
        for(int i=0;i<n;i++){
            int p=int(s[i])-48;
            if(p<=k){
                l=i;
                break;
            }   
        }
        char c=k+48;
        if(l==0){
            cout<<c<<s[0];
        }
        for(int i=0;i<l;i++){
            v.push_back(s[i]);
        }
        v.push_back(c);
        for(int i=l;i<n;i++){
            v.push_back(s[i]);
        }
        for(auto it:v){
            cout<<it;
        }
        cout<<endl;
    }
}