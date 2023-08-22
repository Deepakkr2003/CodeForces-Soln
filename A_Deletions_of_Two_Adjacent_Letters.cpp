#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int d=0,j=-1;
        string s,c;
        cin>>s;
        cin>>c;
        int l=s.size();
        for(int i=0;i<l;i++){
             if(s[i]==c[0] && i%2==0){
                d++;
             }
        }
        if(d>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}