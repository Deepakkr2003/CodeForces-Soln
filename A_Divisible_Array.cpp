#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=2;i<=(2*n);i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
}