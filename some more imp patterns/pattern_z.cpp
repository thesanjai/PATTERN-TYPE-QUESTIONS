/*
z.       4 4 4 4 4 4 4
         4 3 3 3 3 3 4
         4 3 2 2 2 3 4
         4 3 2 1 2 3 4
         4 3 2 2 2 3 4
         4 3 3 3 3 3 4
         4 4 4 4 4 4 4
```
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=4; //find the 4th odd number

    int n= num*2 -1;

   int row_start =0, col_start =0;
   int row_end = n-1, col_end = n-1;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

   while(row_start <= row_end && col_start <= col_end){
    //left to right
    for(int i=col_start;i<=col_end;i++){
      matrix[row_start][i] = num;
    }
    row_start++;

    //top to bottom
    for(int i=row_start;i<=row_end;i++){
      matrix[i][col_end] = num;
    }
    col_end--;

    //right to left
    if(row_start <= row_end){
        for(int i=col_end;i>=col_start;i--){
          matrix[row_end][i] = num;
        }
        row_end--;
    }

    //bottom to top
    if(col_start<=col_end){
        for(int i=row_end;i>=row_start;i--){
          matrix[i][col_start] = num;
        }
        col_start++;
    }
    num--;
   }

   for(auto arr : matrix){
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
   }
    return 0;
}