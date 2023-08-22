#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,s,sum=0;
        cin>>m>>s;
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
            sum+=b[i];
        }
        int maxi = *max_element(begin(b),end(b));
        int ans=sum+s;
        int p=0,cnt=0;
        int x=1;
        bool flag=true;
        while(p<ans){
            p+=x;
            x++;
            cnt++;
            if(p==ans && maxi <= cnt){
                cout<<"YES"<<endl;
                flag=false;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
}