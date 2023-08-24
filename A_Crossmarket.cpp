#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long m=min(x,y);
        long long n=max(x,y);
        long long ans=((m-1)*2)+n;
        if(x==1 && y==1){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
    }
}