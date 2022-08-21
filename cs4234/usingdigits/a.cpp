#include <bits/stdc++.h>
using namespace std;

const int MAX_hw = 101;
const int INF = numeric_limits<int>::max();
int x, y, grid[MAX_hw][MAX_hw];
string codeKey;
int memo[MAX_hw][MAX_hw][MAX_hw + MAX_hw];

int dp(int row, int column, int numHops) {
	if (row >= y || column >= x) return INF; // out of bounds
	if (row == y - 1 && column == x - 1) return grid[y - 1][x - 1]; // done
	if (memo[row][column][numHops] < INF) return memo[row][column][numHops]; // memoization
	int ans = INF;

    // step east
	if (column + 1 < x) {
		ans = min(ans, dp(row, column + 1, numHops) + grid[row][column]);
	}

    // step north
	if (row + 1 < y) {
		ans = min(ans, dp(row + 1, column, numHops) + grid[row][column]);
	}
    
    if (numHops < codeKey.length()) {
        int numHopSquares = codeKey[numHops] - '0';
        
        // hop east
        if (column + numHopSquares + 1 < x) {
            ans = min(ans, dp(row, column + numHopSquares + 1, numHops + 1) + grid[row][column]);
        }
        
        // hop north
        if (row + numHopSquares + 1 < y) {
            ans = min(ans, dp(row + numHopSquares + 1, column, numHops + 1) +  grid[row][column]);
        }
	}
    
	return memo[row][column][numHops] = ans;
}

int main() {
	cin >> x;
    cin >> y;
    cin >> codeKey;
	string gridInput;
	for (int i = 0; i < y; i++) {
		cin >> gridInput;
		for (int j = 0; j < x; j++)
			grid[y - i - 1][j] = gridInput[j] - '0';
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			for (int k = 0; k < MAX_hw + MAX_hw; k++) {
				memo[i][j][k] = INF;
			}
		}
	}
    
	cout << dp(0, 0, 0) << endl;

	return 0;
}