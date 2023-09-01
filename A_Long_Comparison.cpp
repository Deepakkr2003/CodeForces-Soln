#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        int p,q;
        cin>>x>>p;
        cin>>y>>q;
        long long c;
        if(p==2){
            c=100;
        }
        else{
            c=(pow(10,p));
        }
        
        long long d;
        if(q==2){
            d=100;
        }
        else{
            d=pow(10,q);
        }
        
        long long m,n;
        m=x*c;
        n=y*d;
        if(m>n){
            cout<<">"<<endl;
        }
        else if(m<n){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
}