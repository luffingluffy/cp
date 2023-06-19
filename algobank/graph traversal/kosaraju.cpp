int dfsNumberCounter, numSCC;
vector<pair<int, int>> AL, AL_T;
vector<int> dfs_num, dfs_low, S, visited;

void kosaraju(int u, int pass) {  // Pass = 1 (original), 2 (transpose)
    dfs_num[u] = 1;
    vii &neighbor = (pass == 1) ? AL[u] : AL_T[u];  // By ref to avoid copying
    for (auto &[v, w] : neighbor)
        if (dfs_num[v] == UNVISITED)
            kosaraju(v, pass);
    S.push_back(u);  // Similar to toposort
}

int main() {
    int N, M;
    while (scanf("%d %d", &N, &M), (N || M)) {
        AL.assign(N, vii());
        AL_T.assign(N, vii());
        while (M--) {
            int V, W, P;
            scanf("%d %d %d", &V, &W, &P);
            --V;
            --W;  // to 0-based indexing
            AL[V].emplace_back(W, 1);
            AL_T[W].emplace_back(V, 1);
            if (P == 2) {  // If this is two way, add the reverse direction
                AL[W].emplace_back(V, 1);
                AL_T[V].emplace_back(W, 1);
            }
        }
        // First pass; record post-order traversal of graph
        S.clear();
        dfs_num.assign(N, UNVISITED);
        for (int u = 0; u < N; ++u) {
            if (dfs_num[u] == UNVISITED) {
                kosaraju(u, 1);
            }
        }

        // Second pass; explore the SCCs based on 1st pass result on transposed graph
        numSCC = 0;
        dfs_num.assign(N, UNVISITED);
        for (int i = N - 1; i >= 0; --i) {
            if (dfs_num[S[i]] == UNVISITED) {
                ++numSCC, kosaraju(S[i], 2);
            }
        }
        printf("There are %d SCCs\n", numSCC);
    }

    return 0;
}
