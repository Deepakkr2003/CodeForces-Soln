#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x=INT_MAX,y=-1;
        sort(begin(v),end(v));
        for(int i=2;i<n;i++){
            x=min(x,v[i]-v[i-2]);
        }
        cout<<x<<endl;
    }
}