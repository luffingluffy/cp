#define LSOne(S) ((S) & -(S))

const int MAX_n = 11;

int dist[MAX_n][MAX_n], memo[MAX_n][1 << (MAX_n - 1)];

int dp(int u, int mask) {              // mask = free coordinates
    if (mask == 0) return dist[u][0];  // close the loop
    int &ans = memo[u][mask];
    if (ans != -1) return ans;  // computed before
    ans = 2000000000;
    int m = mask;
    while (m) {                                                // up to O(n)
        int two_pow_v = LSOne(m);                              // but this is fast
        int v = __builtin_ctz(two_pow_v) + 1;                  // offset v by +1
        ans = min(ans, dist[u][v] + dp(v, mask ^ two_pow_v));  // keep the min
        m -= two_pow_v;
    }
    return ans;
}