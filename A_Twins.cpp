#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int a[n];
        int totalsum=0,sum1=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            totalsum+=a[i];
        }
    int half=totalsum/2;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        sum1+=a[i];
        cnt++;
        if(sum1>half)
        {
            break;
        }
    }
    cout<<cnt;
    return 0;
}