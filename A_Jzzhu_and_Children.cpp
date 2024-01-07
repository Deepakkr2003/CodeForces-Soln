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
#define fi(i,a,b)       for(int i=a;i<b;i++)
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<float> vect(n+1);
    int ans=n;
    float prev=0;
    for(int i=1;i<=n;i++) cin>>vect[i];
    for(int i=n;i>=1;i--){
        if(ceil(vect[i]/m) > prev){
            ans = i;
            prev = ceil(vect[i]/m);
        }
    }
    cout<<ans<<endl;
    return 0;
}