/*
q.       *
        * *
       *   *
      *     *
     *********
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
         for (int j = 0; j <=i; j++) {
           j==0? cout << "*":cout<<" ";;
        }
         for (int j = 0; j <i; j++) {
          (j+1==i)? cout << "*":cout<<" ";
        }
       
        cout << endl;
         if(i+1==n){
            for (int j = 0; j <= n; j++) {
                cout << "* ";
            }
        }
    }

    cout<<endl<<endl;
    

    for (int row = 1; row <= n; row++)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= 2 * row - 1; col++)
    {
      if (col == 1 || col == 2 * row - 1 || row == n)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
    return 0;
}