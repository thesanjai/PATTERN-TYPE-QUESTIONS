/*
 i) 1 2 3 4 5
    1 2 3 4 
    1 2 3
    1 2 
    1     
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            cout << j-i<<" ";
        }
        cout << endl;
    }

    return 0;
}