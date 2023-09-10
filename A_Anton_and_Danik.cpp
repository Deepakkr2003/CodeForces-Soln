#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int s1=0;
    int s2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            s1++;
        }
        if(s[i]=='D'){
            s2++;
        }
    }
    if( s1>s2){
        cout<<"Anton";
    }
    else if(s2>s1){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    
 
}