#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<4;i++){
            m[s[i]]++;
        }
        int a=-1;
        for(auto it:m){
            a=max(it.second,a);
        }
        if(a==1 || a==2){
            cout<<4<<endl;
        }
        else if(a==3){
            cout<<6<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}