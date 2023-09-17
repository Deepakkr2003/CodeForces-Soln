#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long ans=n;
    ans+=n/(m-1);
    if(n%(m-1)==0){
        ans--;
    }
    cout<<ans<<endl;
}