#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        if(n==5){
            if(a[0]=='T' && a[1]=='i' && a[2]=='m' && a[3]=='r' && a[4]=='u' ){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}