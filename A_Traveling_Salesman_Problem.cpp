#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p,q;
        p.push_back(0);
        q.push_back(0);
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
        sum=abs(p[0])+abs(p[l-1])+abs(q[0])+abs(q[m-1]);
        cout<<(2*sum)<<endl;
    }
}