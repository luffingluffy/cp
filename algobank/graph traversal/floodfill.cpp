int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};  // the order is:
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};  // S/SE/E/NE/N/NW/W/SW

int floodfill(int r, int c, char c1, char c2) {  // returns the size of CC
    if ((r < 0) || (r >= R)) return 0;
    if ((c < 0) || (c >= C)) return 0;
    if (grid[r][c] != c1) return 0;
    int ans = 1;
    grid[r][c] = c2;
    for (int d = 0; d < 8; ++d)
        // outside grid, part 1
        // outside grid, part 2
        // does not have color c1
        // (r, c) has color c1
        // to avoid cycling
        ans += floodfill(r + dr[d], c + dc[d], c1, c2);  // the code is neat as
    return ans;                                          // we use dr[] and dc[]
}