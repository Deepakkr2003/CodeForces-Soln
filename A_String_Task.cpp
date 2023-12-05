#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mod             1000000007
#define max(a,b,c)      max(a,max(b,c))
#define fi(i,a,b)       for(int i=a;i<b;i++)
 
bool isvowel(char c){
if(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U' || c=='Y' || c=='a'||
 c=='e' || c=='i' || c=='o' || c=='u' || c=='y' ) return true;
 return false;
}
 
int main()
{
    string str;
    cin>>str;
    string ans="";
    for(int i=0;i<str.size();i++){
        int c =str[i]-'a';
        if(isvowel(str[i])) continue;
        if(c<0) str[i] = 32 + str[i];
        ans+='.';
        ans+=str[i];
 
    }
    cout<<ans<<endl;
    return 0;
}
 