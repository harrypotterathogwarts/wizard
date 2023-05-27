#include <iostream>

using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        
        row--;
        col--;
    }
    
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        
        row--;
        col++;
    }
    
    return true;
}

bool nQueen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
            
            if(nQueen(arr,x+1,n)){
                return true;
            }
            
            // backtracking
            arr[x][col]=0;   
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    int** arr=new int*[n];
    
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    }

    return 0;
}


// strivercode

// #include <bits/stdc++.h>

// using namespace std;
// class Solution {
//   public:
//     bool isSafe1(int row, int col, vector < string > board, int n) {
//       // check upper element
//       int duprow = row;
//       int dupcol = col;

//       while (row >= 0 && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row--;
//         col--;
//       }

//       col = dupcol;
//       row = duprow;
//       while (col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         col--;
//       }

//       row = duprow;
//       col = dupcol;
//       while (row < n && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row++;
//         col--;
//       }
//       return true;
//     }

//   public:
//     void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) {
//       if (col == n) {
//         ans.push_back(board);
//         return;
//       }
//       for (int row = 0; row < n; row++) {
//         if (isSafe1(row, col, board, n)) {
//           board[row][col] = 'Q';
//           solve(col + 1, board, ans, n);
//           board[row][col] = '.';
//         }
//       }
//     }

//   public:
//     vector < vector < string >> solveNQueens(int n) {
//       vector < vector < string >> ans;
//       vector < string > board(n);
//       string s(n, '.');
//       for (int i = 0; i < n; i++) {
//         board[i] = s;
//       }
//       solve(0, board, ans, n);
//       return ans;
//     }
// };
// int main() {
//   int n = 4; // we are taking 4*4 grid and 4 queens
//   Solution obj;
//   vector < vector < string >> ans = obj.solveNQueens(n);
//   for (int i = 0; i < ans.size(); i++) {
//     cout << "Arrangement " << i + 1 << "\n";
//     for (int j = 0; j < ans[0].size(); j++) {
//       cout << ans[i][j];
//       cout << endl;
//     }
//     cout << endl;
//   }
//   return 0;
// }


//optimisedstriver


#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, vector < int > & leftrow, vector < int > & upperDiagonal, vector < int > & lowerDiagonal, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
          board[row][col] = 'Q';
          leftrow[row] = 1;
          lowerDiagonal[row + col] = 1;
          upperDiagonal[n - 1 + col - row] = 1;
          solve(col + 1, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
          board[row][col] = '.';
          leftrow[row] = 0;
          lowerDiagonal[row + col] = 0;
          upperDiagonal[n - 1 + col - row] = 0;
        }
      }
    }

  public:
    vector < vector < string >> solveNQueens(int n) {
      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      vector < int > leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
      solve(0, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
      return ans;
    }
};
int main() {
  int n = 4; // we are taking 4*4 grid and 4 queens
  Solution obj;
  vector < vector < string >> ans = obj.solveNQueens(n);
  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}