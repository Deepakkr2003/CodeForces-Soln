#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long p=n/2020;
        long long q=n%2020;
        if(n<2020){
            cout<<"NO"<<endl;
        }
        else {
            if(q>p){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}