#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,m;
        cin>>a>>b;
        cin>>n>>m;
        if(m>n){
            cout<<(min((n*a),(n*b)))<<endl;
        }
        else{
            long long p=n/(m+1);
            long long s=n%(m+1);
            long long q=(p*m*a)+(s*min(a,b));
            long long v=n*b;
            cout<<min(q,v)<<endl;
        }
    }
}