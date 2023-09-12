#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
           v.push_back(i);
        }
        cout<<n<<endl; 
        print(v);
        int p=v[0];
        v[0]=v[n-1];
        v[n-1]=p;
        print(v);
        for(int i=n-1;i>=2;i--){
            p=v[i-1];
            v[i-1]=v[i];
            v[i]=p;
            print(v);
        }
    }
}