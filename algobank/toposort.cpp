#include <bits/stdc++.h>
using namespace std;

vector<int> ts;

// DFS
void toposort(int u) {
    dfs_num[u] = VISITED;
    for (auto &[v, w] : AL[u])
        if (dfs_num[v] == UNVISITED)
            toposort(v);
    ts.push_back(u);
}

// Inside int main()
dfs_num.assign(V, UNVISITED);
ts.clear();

for (int u = 0; u < V; ++u)
    if (dfs_num[u] == UNVISITED)
        toposort(u);

reverse(ts.begin(), ts.end());
for (auto &u : ts)
    printf(" %d", u);
printf("\n");

// Kahn's algorithm
// Intuition: enqueue vertices with zero in-degree (dependencies) into a min (priority) queue
priority_queue<int, vi, greater<int>> pq;  // Min PQ
for (int u = 0; u < N; ++u)
    if (in_degree[u] == 0)  // Next to be processed
        pq.push(u);         // Smaller index first

while (!pq.empty()) {            // Kahn's algorithm
    int u = pq.top(), pq.pop();  // Process u
    ts.push_back(u);

    for (auto &v : AL[u]) {
        --in_degree[v];                  // Remove u -> v
        if (in_degree[v] > 0) continue;  // Skip if not a candidate
        pq.push(v);                      // Enqueue v in PQ
    }
}
