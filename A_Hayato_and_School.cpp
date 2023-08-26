#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        vector<int>even,odd;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2){
                odd.push_back(i);
            }
            else{
                even.push_back(i);
            }

        }
        if(odd.size()>=3){
            cout<<"YES"<<endl;
            cout<<odd[0]+1<<" "<<odd[1]+1<<" "<<odd[2]+1<<endl;
        }
        else if(odd.size()>=1 && even.size()>=2){
            cout<<"YES"<<endl;
            cout<<odd[0]+1<<" "<<even[0]+1<<" "<<even[1]+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}