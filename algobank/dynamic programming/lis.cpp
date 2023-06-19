// O(n^2) DP algorithm
int memo[MAX_N];
int LIS(int i) {
    if (i == 0) return 1;
    int &ans = memo[i];
    if (ans != -1) return ans;
    ans = 1;
    for (int j = 0; j < i; ++j)
        if (A[j] < A[i])
            ans = max(ans, LIS(j) + 1);
    return ans;
}

// O(n log k) Greedy + D&C algorithm
vi p;  // predecessor array

void print_LIS(int i) {  // backtracking routine
    if (p[i] == -1) {
        printf("%d", A[i]);
        return;
    }                 // base case
    print_LIS(p[i]);  // backtrack
    printf(" %d", A[i]);
}

int LIS(int i) {
    int k = 0, lis_end = 0;
    vi L(n, 0), L_id(n, 0);
    p.assign(n, -1);

    for (int i = 0; i < n; ++i) {  // O(n)
        int pos = lower_bound(L.begin(), L.begin() + k, A[i]) - L.begin();
        L[pos] = A[i];                    // greedily overwrite this
        L_id[pos] = i;                    // remember the index too
        p[i] = pos ? L_id[pos - 1] : -1;  // predecessor info
        if (pos == k) {                   // can extend LIS?
            k = pos + 1;                  // k = longer LIS by +1
            lis_end = i;                  // keep best ending i
        }
    }

    print_LIS(lis_end) return k;
}