#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long x,y;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(begin(v),end(v),greater<int>());
    long long int arr[n];
    arr[0]=v[0];
    for(int i=1;i<n;i++)
    {
       arr[i]=arr[i-1]+v[i]; 
    }
    for(int i=0;i<q;i++){
        cin>>x>>y;
        long long ans=arr[x-1]-arr[x-y]+v[x-y];
        cout<<ans<<endl;
    }
    
}