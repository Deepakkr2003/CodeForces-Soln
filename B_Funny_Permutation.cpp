#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        if(n==3){
            cout<<-1;
        }
        else if(n==2){
            cout<<2<<" "<<1;
        }
        else if(n==5){
            cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3;
        }
        else{
            for(int i=n;i>0;i--){
                v.push_back(i);
            }
            if(n>5 && n%2){
                swap(v[(n/2)],v[(n/2)-1]);
            }
            for(auto it:v){
            cout<<it<<" ";
            }
        }
        cout<<endl;
    }
}