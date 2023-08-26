#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%3==0){
            cout<<n/3<<endl;
        }
        else {
            cout<<n/7<<endl;
        }
    }
}
