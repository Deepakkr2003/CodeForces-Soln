#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,c=0;
    cin>>n>>m;
    long long x=m/n;
    if(m%n!=0){
        cout<<-1<<endl;
    }
    else{
        while(x>1){
        if(x%3==0){
            c++;
            x=x/3;
        }
        else if(x%2==0){
            c++;
            x=x/2;
        }
        else{
            c=-1;
            break;
        }
    }
    cout<<c<<endl;
    }
    
} 
