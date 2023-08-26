#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,h1,h2,h3;
        cin>>n;
        h1=(n+2)/3+1;
        h2=(n+2)/3;
        h3=n-h1-h2;
        if(h3==0){
            h3++;
            h2--;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
}