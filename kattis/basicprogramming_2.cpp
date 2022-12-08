#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    vi v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.pb(x);
    }

    switch (t) {
        case 1: {
            unordered_set<int> s(v.begin(), v.end());
            for (int i = 0; i <= 7777; i++) {
                if (s.count(i) && s.count(7777 - i)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            cout << "No" << endl;
            break;
        }
        case 2: {
            unordered_set<int> s;
            for (int i = 0; i < v.size(); i++) {
                if (s.count(v[i])) {
                    cout << "Contains duplicate" << endl;
                    return 0;
                }
                s.insert(v[i]);
            }
            cout << "Unique" << endl;
            break;
        }
        case 3: {
            unordered_map<int, int> m;
            for (int i = 0; i < v.size(); i++) {
                m[v[i]]++;
            }
            for (int i = 0; i < v.size(); i++) {
                if (m[v[i]] > n / 2) {
                    cout << v[i] << endl;
                    return 0;
                }
            }
            cout << -1 << endl;
            break;
        }
        case 4: {
            vi sorted = v;
            sort(sorted.begin(), sorted.end());

            if (sorted.size() % 2 == 0) {
                cout << sorted[sorted.size() / 2 - 1] << " " << sorted[sorted.size() / 2] << endl;
            } else {
                cout << sorted[sorted.size() / 2] << endl;
            }
            break;
        }
        case 5: {
            vi temp;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] >= 100 && v[i] <= 999) {
                    temp.pb(v[i]);
                }
            }

            sort(temp.begin(), temp.end());
            for (auto x : temp) {
                cout << x << " ";
            }
        }

        default:
            break;
    }

    return 0;
}