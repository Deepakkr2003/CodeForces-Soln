#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int l=a.size();
        int m=b.size();
        if(l>m){
            if((a[l-1]=='L' && b[m-1]=='L')||(a[l-1]=='L' && b[m-1]=='S')||(a[l-1]=='L' && b[m-1]=='M')||(a[l-1]=='M' && b[m-1]=='S')){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
        else if(l<m){
            if((a[l-1]=='L' && b[m-1]=='L')||(a[l-1]=='S' && b[m-1]=='L')||(a[l-1]=='S' && b[m-1]=='M')||(a[l-1]=='M' && b[m-1]=='L')){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else{
            if((a[l-1]=='S' && b[m-1]=='S')||(a[l-1]=='L' && b[m-1]=='L')||(a[l-1]=='M' && b[m-1]=='M')){
                cout<<"="<<endl;
            }
            else if((a[l-1]=='S' && b[m-1]=='L')||(a[l-1]=='M' && b[m-1]=='L')||(a[l-1]=='S' && b[m-1]=='M')){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
    }
}