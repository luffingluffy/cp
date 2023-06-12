//  The modified BFS code below starts by coloring the source vertex (zeroth layer) with value 0, color the direct neighbors of the source vertex (first layer) with value 1, color the neighbors of direct neighbors (second layer) with value 0 again, and so on, alternating between value 0 and value 1 as the only two valid colors. If we encounter any violation(s) along the way—an edge with two endpoints having the same color, then we can conclude that the given input graph is not a Bipartite Graph.

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

const int INF = 1e9;

int main() {
    int n;
    while (scanf("%d", &n), n) {
        vector<vi> AL(n, vi());  // notice: vi, not vii
        int l;
        scanf("%d", &l);
        // Add adjacency list
        while (l--) {
            int a, b;
            scanf("%d %d", &a, &b);
            AL[a].push_back(b);
            AL[b].push_back(a);  // Bidirectional
        }
        int s = 0;
        queue<int> q;
        q.push(s);
        vi color(n, INF);
        color[s] = 0;
        bool isBipartite = true;  // Add a Boolean flag
        while (!q.empty() && isBipartite) {
            int u = q.front();
            q.pop();
            for (auto &v : AL[u]) {
                if (color[v] == INF) {
                    color[v] = 1 - color[u];  // Record two colors
                    q.push(v);
                } else if (color[v] == color[u]) {  // If u & v have same color
                    isBipartite = false;            // Coloring conflict
                    break;
                }
            }
        }
        printf("%sBICOLORABLE.\n", (isBipartite ? "" : "NOT "));
    }
    return 0;
}