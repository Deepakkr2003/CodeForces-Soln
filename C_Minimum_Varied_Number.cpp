#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        int p=9;
        int l=n;
        vector<int>v;
        if(n<10){
            cout<<n;
        }
        else{
            while(n>0){
            s+=p;
            if(s>l){
                v.push_back(n);
            }
            else{
                v.push_back(p);
            }
            n=n-p;
            p--;
            }
        }
        reverse(v.begin(),v.end());
        for(auto it:v){
            cout<<it;
        }
        cout<<endl;
    }
}