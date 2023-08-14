#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int p=a+(2*b);
        if(a==0){
            cout<<1<<endl;
        }
        else{
            cout<<p+1<<endl;
        }
    }
}