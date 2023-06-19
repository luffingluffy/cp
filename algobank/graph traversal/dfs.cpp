enum { UNVISITED = -1,
       VISITED = -2 };
vi dfs_num;
void dfs(int u) {
    dfs_num[u] = VISITED;
    for (auto &[v, w] : AL[u])
        if (dfs_num[v] == UNVISITED)
            dfs(v);
}