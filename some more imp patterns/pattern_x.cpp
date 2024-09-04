/*
x.          1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        int num =i;
        for(int j=i;j<=n;j++){
            cout<<"  ";
        }
      for(int j=1;j<=i;j++){
        cout<<i-j+1<<" ";
      }
      for(int j=2;j<=i;j++){
        cout << j<<" ";
      }
        cout<<endl;
    }
    return 0;
}