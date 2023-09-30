#include<bits/stdc++.h>
using namespace std;
 
string small(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            char a=s[i]+32;
            s[i]=a;
        }
    }
    return s;
}
string big(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=122){
            char a=s[i]-32;
            s[i]=a;
        }
    }
    return s;
}
 
int main(){
      string s;
      cin>>s;
      int n=s.size();
      int sum1=0;
      int sum2=0;
      for(int i=0;i<n;i++){
        if(s[i]>=65 &&s[i]<=90){
            sum1++;
        }
        if(s[i]>=97 && s[i]<=122){
            sum2++;
        }
      }
      string a;
      if(sum1>sum2){
        a=big(s);
      }
      else{
        a=small(s);
      }
      cout<<a;
}
