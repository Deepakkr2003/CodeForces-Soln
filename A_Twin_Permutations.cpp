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
        int m=*max_element(begin(v),end(v))+1;
        for(int i=0;i<n;i++){
            cout<<(m-v[i])<<" ";
        }
        cout<<endl;
    }
}