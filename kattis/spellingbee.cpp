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

    string d, w;
    unordered_set<char> s;

    int n;
    cin >> d >> n;

    for (char c : d) {
        s.insert(c);
    }

    while (n--) {
        cin >> w;
        bool valid = true, seenCenter = false;

        for (char c : w) {
            if (c == d[0]) seenCenter = true;
            if (!s.count(c)) {
                valid = false;
                break;
            }
        }

        if (w.size() < 4 || !seenCenter) valid = false;

        if (valid) {
            cout << w << endl;
        }
    }

    return 0;
}