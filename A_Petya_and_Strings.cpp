#include <bits/stdc++.h>
using namespace std;
int main(){
    char A[101], B[101];
    cin >> A >> B;
    cout << strcmp(strlwr(A),strlwr(B));
}