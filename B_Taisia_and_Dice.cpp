#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        vector<int>v;
        int p=s-r;
        v.push_back(p);
        int l=n-1;
        for(int i=l;i>0;i--){
            int q=(r+i-1)/i;
            v.push_back(q);
            r-=q;
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}