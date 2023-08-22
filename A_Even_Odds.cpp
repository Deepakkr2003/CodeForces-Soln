#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long p=(n+1)/2;
    if(k<=p){
        cout<<((2*k)-1)<<endl;
    }
    else{
        cout<<((k-p)*2)<<endl;
    }
}