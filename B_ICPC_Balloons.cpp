#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=2*n;
        string s;
        cin>>s;
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        int l=st.size();
        int ans=a-(n-l);
        cout<<ans<<endl;
    }
}