#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        bool flag =true;
        int n,c=0;
        cin>>n;
        vector<int>a(n);
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            if(s.find(a[i])!=s.end()){
                cout<<i+1<<endl;
                flag=false;
                break;
            }
            else{
                s.insert(a[i]);
            }
        }
        if(flag){
            cout<<0<<endl;
        }
    }
}