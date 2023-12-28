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
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        int i=0;
        ll ans1=0;
        ll ans2=0;
        ll tmpa=a;
        ll tmpb=b;
        while(tmpa<=n && tmpb<=n){
            if(i%2==0) tmpa += tmpb;
            else tmpb += tmpa;
            i++;
            ans1++;
        }
        i=0;
        while(a<=n && b<=n){
            if(i%2==0) b += a;
            else a += b;
            i++;
            ans2++;
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}