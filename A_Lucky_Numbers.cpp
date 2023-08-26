#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long l,r,a=-1,y=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            string s=to_string(i);
            long long m=*max_element(begin(s),end(s));
            long long n=*min_element(begin(s),end(s));
            long long x=m-n;
            if(x>=a){
                a=x;
                y=i;
            }
            if(a==9){
                break;
            }
        }
        cout<<y<<endl;
    }
}