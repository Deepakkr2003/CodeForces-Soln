#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i=3;
        set<int>p,q;
        while(i--){
            int x,y;
            cin>>x>>y;
            p.insert(x);
            q.insert(y);
        }
        int l=p.size();
        int m=q.size();
        if(l==3 || m==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}