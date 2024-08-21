/*
 h) 5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
    1    
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << n-i<<" ";
        }
        cout << endl;
    }

    return 0;
}