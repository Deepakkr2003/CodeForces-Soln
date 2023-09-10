#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            sum1++;
        }
        else{
            sum2++;
        }
    }
    
    if(sum1==1){
        for(int i=1;i<=n;i++){
            if(arr[i]%2==0){
                cout<<i;
            }
        }
    }
    if(sum2==1){
        for(int i=1;i<=n;i++){
            if(arr[i]%2==1){
                cout<<i;
            }
        }
    }
}