#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int c=0;
    for(int i=1;i<l;i++){
        if(s[i]==s[i-1]){
            c++;
            if(c==6){
                break;
            }
        }
        else{
            c=0;
        }
    }
    if(c>=6){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}