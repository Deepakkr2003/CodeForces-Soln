#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
      int a;
      int sum=0;
      for(int i=0;i<3;i++){
        cin>>a;
        if(a==1){
            sum++;
        }
        }
        if(sum>=2){
            ans++;
      }  
    }
    cout<<ans;
}