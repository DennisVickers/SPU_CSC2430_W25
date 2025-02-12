#include <iostream>
using namespace std;

// Backtracking: Solving the N-Queens Problem
#define N 4

bool isSafe(int board[N][N], int row, int col) {
   for (int i = 0; i < col; i++) {
      if (board[row][i]) return false;
   }
   
   for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
      if (board[i][j]) return false;
   }
   
   for (int i = row, j = col; i < N && j >= 0; i++, j--) {
      if (board[i][j]) return false;
   }

   return true;
}

bool solveNQueens(int board[N][N], int col) {
   if (col >= N) return true; // Base Case: All columns filled

   for (int i = 0; i < N; i++) {
      if (isSafe(board, i, col)) {
         board[i][col] = 1; // Place Queen

         if (solveNQueens(board, col + 1)) {
            return true; // Recursive Case
         }
         board[i][col] = 0; // Backtrack
      }
   }
   return false;
}

void printBoard(int board[N][N]) {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << (board[i][j] ? " Q " : " . ");
      cout << endl;
   }
}

void runNQueens() {
   int board[N][N] = {0};

   if (solveNQueens(board, 0)) {
      cout << "N-Queens Solution:\n";
      printBoard(board);
   } else {
      cout << "No Solution Found\n";
   }
}

// Main Function
int main() {

   runNQueens(); // Run N-Queens Problem
   
   return 0;
}
