#include <bits/stdc++.h>
using namespace std;

const int N = 9;

bool isValidInput(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (grid[row][col] != 0) {
                int num = grid[row][col];
                grid[row][col] = 0;
                int bitMask = 0;
                for (int x = 0; x < N; x++)
                    bitMask |= (1 << grid[row][x]) | (1 << grid[x][col]);
                int startRow = row - row % 3, startCol = col - col % 3;
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        bitMask |= (1 << grid[i + startRow][j + startCol]);

                if (bitMask & (1 << num)) {
                    return false;
                }
                grid[row][col] = num;
            }
        }
    }
    return true;
}

bool solveSudoku(int grid[N][N], int &solutionCount, int solGrid[N][N], int row = 0, int col = 0) {
    if (row == N) {
        solutionCount++;
        if (solutionCount == 1)
            memcpy(solGrid, grid, N * N * sizeof(int));
        return solutionCount > 1;
    }

    if (grid[row][col] != 0) {
        if (solveSudoku(grid, solutionCount, solGrid, col == N - 1 ? row + 1 : row, (col + 1) % N))
            return true;
    } else {
        int bitMask = 0;
        for (int x = 0; x < N; x++)
            bitMask |= (1 << grid[row][x]) | (1 << grid[x][col]);
        int startRow = row - row % 3, startCol = col - col % 3;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                bitMask |= (1 << grid[i + startRow][j + startCol]);

        for (int num = 1; num <= N; num++) {
            if (!(bitMask & (1 << num))) {
                grid[row][col] = num;
                if (solveSudoku(grid, solutionCount, solGrid, col == N - 1 ? row + 1 : row, (col + 1) % N))
                    return true;
                grid[row][col] = 0;
            }
        }
    }
    return false;
}

int main() {
    while (true) {
        int grid[N][N];
        int solGrid[N][N];
        bool isEndOfFile = false;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!(cin >> grid[i][j])) {
                    isEndOfFile = true;
                    break;
                }
            }
            if (isEndOfFile) break;
        }

        if (isEndOfFile) break;

        if (!isValidInput(grid)) {
            cout << "Find another job" << endl;
        } else {
            int solutionCount = 0;
            solveSudoku(grid, solutionCount, solGrid);

            if (solutionCount == 0)
                cout << "Find another job" << endl;
            else if (solutionCount == 1) {
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++)
                        cout << solGrid[i][j] << " ";
                    cout << endl;
                }
            } else
                cout << "Non-unique" << endl;
        }
        cout << endl;
    }
    return 0;
}