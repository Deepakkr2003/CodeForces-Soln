#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long m=*min_element(begin(a),end(a));
        if(a[0]>m){
            cout<<"Alice"<<endl;
        }
        if(a[0]==m){
            cout<<"Bob"<<endl;
        }
    }
}