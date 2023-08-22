#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]>v[i+(i*k)]){
                swap(v[i],v[i+(i*k)]);
            }
        }
        int sum=0,m=-1;
        for(int i=0;i<n;i++){
            while(k--){
                sum+=v[i];
            }
            if(sum>m){
                m=sum;
            }
        }
        cout<<m<<endl;
    }
}