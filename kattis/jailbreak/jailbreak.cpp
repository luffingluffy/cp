#include <bits/stdc++.h>
using namespace std;

int h,w;
char grid[105][105]; // [y][x], [h][w]

struct state {
	int y;
	int x;
	int dis;
	state(int ny, int nx, int nd) : y(ny), x(nx), dis(nd) {}
};

const int INF = numeric_limits<int>::max();

void bfs(int sx, int sy, int dis[105][105]) {
	for (int y = 0; y < h+4; y++) {
		for (int x = 0; x < w+4; x++) {
			dis[y][x] = INF;
		}
	}
	
	int dy[4] = {1, -1, 0, 0};
	int dx[4] = {0, 0, 1, -1};
	
	deque<state> Q;
	Q.push_front(state(sy, sx, 0));
	
    while (!Q.empty()) {
		state s = Q.front();
		Q.pop_front();
		if (s.dis < dis[s.y][s.x]) {
			dis[s.y][s.x] = s.dis;
			
			for (int i = 0; i < 4; i++) {
				int y = s.y + dy[i];
				int x = s.x + dx[i];
				
				if (grid[y][x] == '.') {
					Q.push_front(state(y,x,s.dis));
				}
				else if (grid[y][x] == '#') {
					Q.push_back(state(y,x,s.dis+1));
				}
			}
		}
	}
}

void solve() {
	cin >> h >> w;
	
	int nd = 0;
	int dx[2], dy[2];
	
	for (int y = 0; y < h; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < w; x++)
		{
			grid[y+2][x+2] = s[x];
			if (s[x] == '$')
			{
				dy[nd] = y+2;
				dx[nd] = x+2;
				nd++;
				grid[y+2][x+2] = '.';
			}
		}
	}
	
	for (int y = 0; y < h+4; y++) {
		grid[y][0] = '*';
		grid[y][1] = '.';
		grid[y][w+2] = '.';
		grid[y][w+3] = '*';
	}
	
	for (int x = 1; x < w+3; x++) {
		grid[0][x] = '*';
		grid[1][x] = '.';
		grid[h+2][x] = '.';
		grid[h+3][x] = '*';
	}
	
	int dis_out[105][105];
	int dis[2][105][105];
	
	bfs(1, 1, dis_out);

	for (int i = 0; i < nd; i++) {
		bfs(dx[i], dy[i], dis[i]);
    }
	
	int best = INF;
	for (int y = 0; y < h+4; y++) {
		for (int x = 0; x < w+4; x++) {
			int dist = dis_out[y][x] - (nd * (grid[y][x] == '#'));
			for (int i = 0; i < nd; i++) {
				dist += dis[i][y][x];
            }
			best = min(best, dist);
		}
	}
	
	cout << best << endl;
}

int main() {
	int n;
	cin >> n;
	while (n--)
		solve();
	return 0;
}