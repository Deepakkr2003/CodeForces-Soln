#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long  m;
        cin>>m;
        string l=to_string(m);
        int n=l.size();
        long long ans=m-(pow(10,n-1));
        cout<<ans<<endl;
    }
}