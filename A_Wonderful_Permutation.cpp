#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p=1;
        for(int i=0;i<k;i++){
            if(a[i]!=p && a[i]>k){
                c++;
                p++;
            }
            else{
                p++;
            }
        }
        cout<<c<<endl;
    }
}