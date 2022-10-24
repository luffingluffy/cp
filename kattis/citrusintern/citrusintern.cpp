#include <bits/stdc++.h>
using namespace std;

int N, u, sub, root;
int currCost;
int cost[100005]; // Cost of bribing member i
int MAX_VAL = numeric_limits<int>::max();
int deg[100005]; // Number of subordinates of member i
int in[100005]; // Minimum cost of member i and subordinates if member i is bribed
int out[100005]; // Minimum cost of member i and subordinates if member i is not bribed
int outS[100005]; // Special case of out; Minimum cost if member i is not bribed but at least one child of member i covered
vector<vector<int>> subordinates(100005); // List of subordinates of member i

// Recursively gets minimum cost of children using top-down DP
void dp(int curr) {

    // Base case: No more subordinates
    if (subordinates[curr].size() == 0) {
        in[curr] = cost[curr];
        out[curr] = 0;
        outS[curr] = cost[curr]; // Take at least the child
        return;
    }

    // Bribe current member
    in[curr] = cost[curr];
    for(int sub: subordinates[curr]) { // Get minimum cost of not bribing subordinates
        if (out[sub] == -1) {
            dp(sub);
        }
        in[curr] += out[sub];
    }

    // Don't bribe current member
    out[curr] = 0;
    for(int sub: subordinates[curr]) { // Get minimum cost of bribing subordinates
        if (in[sub] == -1 || outS[sub] == -1) {
            dp(sub);
        }
        out[curr] += min(in[sub], outS[sub]);
    }

    outS[curr] = MAX_VAL;
    for(int sub : subordinates[curr]) { // Get minimum cost of not bribing current but at least one subordinate is bribed
        currCost = out[curr] - min(in[sub], outS[sub]);
        currCost += in[sub]; // Pick current child; Ensure that at least one child is covered
        outS[curr] = min(currCost, outS[curr]);
    }
}

int main(void) {

    cin >> N;

    for (int i = 0; i < N; i++) {
        scanf("%lld %d", &cost[i], &u);
        for (int j = 0; j < u; j++) {
            scanf("%d", &sub);
            deg[sub]++;
            subordinates[i].push_back(sub);
        }
    }

    for (int i = 0; i < N; i++) {
        if (deg[i] == 0) {
            root = i;
        }
    }

    // Initialize to all -1 default values
    memset(in, -1, sizeof(in));
    memset(out, -1, sizeof(out));
    memset(outS, -1, sizeof(outS));

    dp(root);

    printf("%lld", min(in[root], outS[root]));

    return 0;
}