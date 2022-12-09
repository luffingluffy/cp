#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    int n;
    cin >> n;
    cin.ignore();

    vector<vector<string>> v(n);
    vs strings(n);
    vi diff(n);

    for (int i = 0; i < n; i++) {
        string alternative;
        getline(cin, alternative);

        strings[i] = alternative;

        stringstream ss(alternative);
        string token;

        while (getline(ss, token, ',')) {
            v[i].pb(token);
        }

        for (int j = 1; j < v[i].size(); j++) {
            v[i][j] = v[i][j].substr(1);
        }
    }

    for (int i = 0; i < n; i++) {
        int max_cost = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int cost = 0;

            for (int k = 0; k < v[j].size(); k++) {
                if (v[i][k] != v[j][k]) {
                    cost++;
                }
            }
            if (cost > max_cost) {
                max_cost = cost;
            }
        }
        diff[i] = max_cost;
    }

    int min = *min_element(diff.begin(), diff.end());

    for (int i = 0; i < n; i++) {
        if (diff[i] == min) {
            cout << strings[i] << endl;
        }
    }

    return 0;
}