/*
 e) 1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1  
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
   
    for (int i = 1; i <= n; i++) {
        int count = i % 2; // Initialize count as 0 or 1, depending on the row number. 0 % 2 = 0, 1 % 2 = 1.
        for (int j = 0; j <i ; j++) {
            cout<< count<<" ";
            count = (count + 1) % 2; // Alternate between 0 and 1 for each number in the row. 1 % 2 = 1, 0 % 2 = 0.
           
        }
        cout << endl;
    }

    return 0;
}