#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        if((a<b && b<d && a<c && c<d)||(a>b && b<d && a<c && c>d)||(a>b && b>d && a>c && c>d)||(a<b && b>d && a>c && c<d)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}