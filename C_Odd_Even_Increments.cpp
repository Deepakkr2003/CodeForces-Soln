#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0,d=0,e=0,f=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((i%2!=0) && (a[i]%2==0) ){
                c++;
            }
            else if((i%2!=0) && (a[i]%2)){
                d++;
            }
            else if((i%2==0)&&(a[i]%2)){
                e++;
            }
            else{
                f++;
            }
        }
        if((c+e)==n || (c+f)==n || (d+e)==n || (d+f)==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}