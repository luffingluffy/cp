#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& dest, int i) {
    if(dest[i] == -1) return i;
    return dest[i] = find(dest, dest[i]);
}

void join(vector<int>& dest, int i, int j) {
    i = find(dest, i);
    j = find(dest, j);
    if (i == j) return;
    dest[i] = j;
}

int main() {
    int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;

    vector<int> redEdge(n, -1);
    vector<int> blueEdge(n, -1);
    int blueCost = 0;
    int blueTaken = 0;

    for (int i = 0; i < m; i++) {
        char c;
        int f, t;
        cin >> c;
        cin >> f;
        cin >> t;
        f--;
        t--;

        if (c == 'R') {
            join(redEdge, f, t);
        } else {
            join(blueEdge, f, t);
        }
    }

    for (int i = 0; i < n; i++) {
        if(redEdge[i] == -1) {
            blueCost++;
        }
    }
    blueCost -= 1;

    for (int i = 0; i < n; i++) {
        if (blueEdge[i] != -1) {
            blueTaken++;
        }
    }

    if (blueTaken < k || blueCost > k || blueTaken < blueCost) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}