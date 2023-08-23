#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long num ;
        cin>>num;
        // create a new object of stringstream class
        stringstream stream;
    
        // add long number to variable of type stringstream
        stream << num;
        string l;
    
        // get string object from stringstream variable using
        // str() method
        l = stream.str();
        int p=l.size();
        long long m = *min_element(begin(l),end(l));
        if(p==2){
            cout<<l[p-1]<<endl;
        }
        else{
            cout<<m-48<<endl;
        }
        
    }
} 
