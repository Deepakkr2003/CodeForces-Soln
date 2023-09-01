#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p,q;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x==0){
                p.push_back(y);
            }
            if(y==0){
                q.push_back(x);
            }
        }
        sort(begin(p),end(p));
        sort(begin(q),end(q));
        int l=p.size();
        int m=q.size();
        int sum=0;
        if(l==1 && m==1){
            sum=abs(p[0])+abs(q[0]);
        }
        else if(m==1){
            sum=abs(p[0])+abs(p[l-1])+abs(q[0]);
        }
        else if(l==1){
            sum=abs(p[0])+abs(q[0])+abs(q[m-1]);
        }
        else{
            sum=abs(p[0])+abs(p[l-1])+abs(q[0])+abs(q[m-1]);
        }
        cout<<(2*sum)<<endl;
    }
}