#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string q;
        cin>>q;
        string s="Yes";
        string p="";
        for(int i=0;i<20;i++){
            p+=s;
        }
        size_t found = p.find(q);
        if (found != string::npos)
        cout << "YES" << endl;
        else
        cout<<"NO"<<endl;
    }
}