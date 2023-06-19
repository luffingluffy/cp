// Original:
// inside int main()
vi dist(V, INF);
dist[s] = 0;
set<ii> pq;  // balanced BST version
for (int u = 0; u < V; ++u)
    pq.emplace(dist[u], u);  // dist[u] = INF, but dist[s] = 0

// sort the pairs by non-decreasing distance from s
while (!pq.empty()) {
    auto [d, u] = *pq.begin();  // shortest unvisited u
    pq.erase(pq.begin());
    for (auto &[v, w] : AL[u]) {               // all edges from u
        if (dist[u] + w >= dist[v]) continue;  // skip if not improving
        pq.erase(pq.find({dist[v], v}));       // erase old pair
        dist[v] = dist[u] + w;                 // relax the edge
        pq.emplace(dist[v], v);                // enqueue better pair
    }
}
for (int u = 0; u < V; ++u)
    printf("SSSP(%d, %d) = %d\n", s, u, dist[u]);

// Modified:
// inside int main()
vi dist(V, INF);
dist[s] = 0;
priority_queue<ii, vector<ii>, greater<ii>> pq;
pq.emplace(0, s);

// sort the pairs by non-decreasing distance from s
while (!pq.empty()) {
    auto [d, u] = pq.top();
    pq.pop();
    if (d > dist[u]) continue;  // important check to not repeat due to lazy deletion
    for (auto &[v, w] : AL[u]) {
        if (dist[u] + w >= dist[v]) continue;
        dist[v] = dist[u] + w;
        pq.emplace(dist[v], v);
    }
}
for (int u = 0; u < V; ++u)
    printf("SSSP(%d, %d) = %d\n", s, u, dist[u]);