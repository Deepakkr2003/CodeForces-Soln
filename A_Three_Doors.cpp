#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        if(a[x-1]!=0 && a[a[x-1]-1]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}