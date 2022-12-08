#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

// Finds the number of obstacles not destroyed, as flight_level <= height of obstacle => collision
int binarySearch(vi &v, int x) {
    int lower = 0;
    int upper = v.size();
    while (lower < upper) {
        int mid = (lower + upper) / 2;
        if (v[mid] >= x)
            upper = mid;
        else
            lower = mid + 1;
    }
    return lower;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n >> h;
    vi stalagmite;
    vi stalactite;
    vi num_obstacles(h);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i % 2 == 0) {
            stalagmite.pb(x);
        } else {
            stalactite.pb(x);
        }
    }

    sort(stalagmite.begin(), stalagmite.end());
    sort(stalactite.begin(), stalactite.end());

    for (int i = 1; i <= h; i++) {
        //
        int obstacles = (stalagmite.size() - binarySearch(stalagmite, i) + stalactite.size() - binarySearch(stalactite, h - i + 1));
        num_obstacles[i - 1] = obstacles;
    }

    int min_obstacles = *min_element(num_obstacles.begin(), num_obstacles.end());
    int num_min_obstacles = count(num_obstacles.begin(), num_obstacles.end(), min_obstacles);

    cout << min_obstacles << " " << num_min_obstacles << endl;

    return 0;
}