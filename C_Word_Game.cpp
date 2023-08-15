#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<string>a,b,c;
        for(int i=0;i<n;i++){
            string tmp;
            cin>>tmp;
            a.insert(tmp);
        }
        for(int i=0;i<n;i++){
            string tmp;
            cin>>tmp;
            b.insert(tmp);
        }
        for(int i=0;i<n;i++){
            string tmp;
            cin>>tmp;
            c.insert(tmp);
        }
        
    }
}