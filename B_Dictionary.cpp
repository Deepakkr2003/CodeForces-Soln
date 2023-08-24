#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p=s[0]-97;
        int q=s[1]-97;
        int ans=((p*25)+1)+q;
        if(p>q){
            cout<<ans<<endl;
        }
        else{
            cout<<ans-1<<endl;
        }
        
    }
}