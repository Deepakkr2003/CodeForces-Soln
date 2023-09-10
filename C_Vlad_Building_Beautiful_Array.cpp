#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p=0,q=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i]; 
            if(v[i]%2){
                p++;
            }
            else{
                q++;
            }
        }
        int m=*min_element(begin(v),end(v));
        if((m%2==0 && q==n) || (p==n) || (m%2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}