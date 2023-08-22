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
        map<int,int>m1;
        map<char,int>m2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m1[a[i]]++;
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            m2[s[i]]++;
        }
        
    }
}