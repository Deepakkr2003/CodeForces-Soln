#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,p;
        cin>>x>>p;
        long long y,q;
        cin>>y>>q;
        long long c=pow(10,p);
        long long d=pow(10,q);
        long long m=x*(c);
        long long n=y*(d);
        cout<<c<<" "<<d<<endl;
        // if(m>n){
        //     cout<<">"<<endl;
        // }
        // else if(m<n){
        //     cout<<"<"<<endl;
        // }
        // else{
        //     cout<<"="<<endl;
        // }
    }
}