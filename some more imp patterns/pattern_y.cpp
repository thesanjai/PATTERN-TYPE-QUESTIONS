/*
y.     1      1
       12    21
       123  321
       12344321
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
         for(int j=1;j<=i;j++){
            cout<<i-j+1;
        }
        cout<<endl;

    }
    return 0;
}