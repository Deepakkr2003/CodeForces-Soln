#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2){
            cout<<-1<<endl;
        }
        else{
            cout<<1<<" "<<n/2<<endl;
        }
    }
}