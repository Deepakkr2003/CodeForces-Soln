#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,q,sum=0,cnt1=0,cnt2=0;
        cin>>n>>q;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%2){
                cnt2++;
            }
            else{
                cnt1++;
            }
        }
        while(q--){
            int x,y;
            cin>>x>>y;
            if(x==0 && y%2==0){
                sum+=(cnt1*y);
                cout<<sum<<endl;
            }
            else if(x==0 && y%2){
                sum+=(cnt1*y);
                cnt2=n;
                cnt1=0;
                cout<<sum<<endl;
            }
            else if(x==1 && y%2==0){
                sum+=(cnt2*y);
                cout<<sum<<endl;
            }
            else{
                sum+=(cnt2*y);
                cnt2=0;
                cnt1=n;
                cout<<sum<<endl;
            }
        }
    }
}

    