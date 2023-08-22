#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x=0,y=0,ans=0,p=0,q=0;
    cin>>n>>m>>a>>b;
    p=n/m;
    q=n%m;
    int s=min(b,(q*a));
    x=(p*b)+s;
    y=n*a;
    ans=min(x,y);
    cout<<ans<<endl;
}