void bfs() {
    vi dist(V, INF);
    dist[s] = 0;

    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto &[v, w] : AL[u]) {
            if (dist[v] != INF) continue;
            dist[v] = dist[u] + 1;
            q.push(v);
        }
    }
}

// If need keep track of dist traversed as a variable:
void bfs() {
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int dist = 0;

    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int n = q.size();
        while (n--) {
            auto curr = q.front();
            q.pop();
            for (int d = 0; d < 4; d++) {
                int dr = curr.first + dir[d][0], dc = curr.second + dir[d][1];
                if (dr >= 0 && dc >= 0 && dr < m && dc < n) {
                    q.push({dr, dc});
                }
            }
        }

        dist++
    }
}