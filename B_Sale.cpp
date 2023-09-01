#include<bits/stdc++.h>
using namespace std;
int main()
{
      int m,n;
      cin>>n>>m;
      int ar[n];
      int mon=0;
      for(int i=0;i<n;i++)
      {
          cin>>ar[i];
      }
      sort(ar,ar+n);
      for(int i=0;i<n;i++)
      {
          if(m>0)
          {
              if(ar[i]<0)
              {
                  mon+=abs(ar[i]);
                  m--;
              }
          }
          if(m==0){
          break;
          }
      }
          cout<<mon;
      
    return 0;
}