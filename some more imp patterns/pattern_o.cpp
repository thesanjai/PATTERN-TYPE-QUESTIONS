/*
o.      *
       ***
      *****
     *******
    ********* 
     *******
      *****
       ***
        *  
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            cout << " ";
        }
         for (int j = 0; j <=i; j++) {
            cout << "*";
        }
         for (int j = 0; j <i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
         for (int j = i+1; j < n; j++) {
            cout << "*";
        }
         for (int j = i; j <n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //methood 2

    cout<<endl<<endl;

      for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            cout << " ";
        }
         for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
         for (int j = i; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }


    /*NOTE
            both triangle looks similar but not exactly
            check the number of '*' in each row

            1st pattern prints odd number of *
            2nd pattern prints n number of *
    */
    return 0;
}