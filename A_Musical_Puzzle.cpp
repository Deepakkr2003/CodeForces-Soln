#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>a;
        for(int i=1;i<n;i++){
            string p="";
            p+=s[i-1];
            p+=s[i];
            a.insert(p);
        }
        int l=a.size();
        cout<<l<<endl;
    }
}