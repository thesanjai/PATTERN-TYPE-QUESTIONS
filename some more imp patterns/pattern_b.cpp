/*
 b) 1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i <<" ";
        }
        cout << endl;
    }

    return 0;
}