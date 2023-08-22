#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long l,r,a,ans=0;
        cin>>l>>r>>a;
        if(l/a==r/a){
            ans=((r)/a)+((r)%a);
        }
        else{
            ans=max(r/a+r%a,r/a-1+a-1);
        }
        cout<<ans<<endl;
    }
}