#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0,m=-1,d=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=1;i<n;i++){
            if(s[i]=='B' && s[i-1]=='B'){
                c++;

            }
        }
    }
}