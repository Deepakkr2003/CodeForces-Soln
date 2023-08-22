#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        swap(v[1],v[n-1]);
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}