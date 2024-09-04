/*
 r)  *********
      *     *
       *   *
        * *
         *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<n;j++){
          i==0 ?  cout<<" *":cout<<" ";
        } 
        for(int j=i;j<n;j++){
          i==j ? cout<<"*" : cout<<" ";
          
        }
         for(int j=i;j<n;j++){
         j+1==n?cout<<"*" : cout<<" ";
          
        }
        

        cout<<endl;
    }

    return 0;
}