#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m=0;
        cin>>n;
        vector<long long>a(n);
        vector<long long>p;
        set<int>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                m++;
            }
            else{
                break;
            }
        }
        if((m+1)==n){
            cout<<-1<<endl;
        }
        else{
            cout<<m+1<<" "<<(n-(m+1))<<endl;
            for(int i=0;i<=m;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=m+1;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

        
    }
}