// Top down:
int dp(vector<int>& coins, int amount, vector<int>& memo) {
    if (amount < 0) {
        return -1;
    } else if (amount == 0) {
        return 0;
    }

    if (memo[amount] != -1) {
        return memo[amount];
    }

    int ans = INT_MAX;
    for (int coin : coins) {
        int subproblem = dp(coins, amount - coin, memo);
        if (subproblem != -1) {
            ans = min(ans, subproblem + 1);
        }
    }
    memo[amount] = (ans == INT_MAX) ? -1 : ans;

    return memo[amount];
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> memo(amount + 1, -1);
    return dp(coins, amount, memo);
}

// Botton up:
int coinChange(vector<int>& coins, int amount) {
    vector<int> memo(amount + 1, 1e6);
    memo[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
                memo[i] = min(memo[i], 1 + memo[i - coins[j]]);
            }
        }
    }

    return memo[amount] == 1e6 ? -1 : memo[amount];
}

// Counting variant:
int ways(int type, int value) {
    if (value == 0) return 1;                  // one way, use nothing
    if ((value < 0) || (type == N)) return 0;  // invalid or done
    int& ans = memo[type][value];
    if (ans != -1) return ans;                         // was computed before
    return ans = ways(type + 1, value) +               // ignore this type
                 ways(type, value - coinValue[type]);  // one more of this type
}