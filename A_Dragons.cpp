#include<bits/stdc++.h>
using namespace std;
 
int main(){
	pair<int,int> a[1001];
	int n,s;
	cin>>s>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first>>a[i].second;
	} 
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		if(s>a[i].first){
			s+=a[i].second;
		}
		else {
			cout<<"NO";
			break;
		}
		if(i==n)cout<<"YES";
	}
	return 0;
}