#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long s=0;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s=__gcd(s,v[i]);
        }
        sort(v.begin(),v.end(),greater<long long>());
        cout<<v[0]/s<<endl;
    }
}