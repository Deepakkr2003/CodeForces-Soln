#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,char>m1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(m1.find(a[i])!=m1.end()){
                if(m1[a[i]]!=s[i]){
                    flag=true;
                }
            }
            else{
                m1.insert({a[i],s[i]});
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}