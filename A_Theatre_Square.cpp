#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long p=(n+a-1)/a;
    long long q=(m+a-1)/a;
    long long ans=p*q;
    cout<<ans<<endl;
} 