vi match, vis;
vector<vi> AL;
int Aug(int L) {
    if (vis[L]) return 0;  // L visited, return 0
    vis[L] = 1;
    for (auto &R : AL[L])
        if ((match[R] == -1) || Aug(match[R])) {
            match[R] = L;  // flip status
            return 1;      // found 1 matching
        }

    return 0;  // no matching
}

// inside int main()
// build unweighted Bipartite Graph with directed edge left->right set
// that has V vertices and Vleft vertices on the left set
match.assign(V, -1);
int MCBM = 0;
for (int L = 0; L < Vleft; ++L) {  // for each free vertices
    vis.assign(Vleft, 0);          // reset first
    MCBM += Aug(L);                // try to match L
}
cout << "Found " << MCBM << " matchings\n";
