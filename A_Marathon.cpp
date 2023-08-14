#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,x=0;
        cin>>a>>b>>c>>d;
        if(a<b)x++;
        if(a<c)x++;
        if(a<d)x++;
        cout<<x<<endl;
    }
    
}