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

    unordered_set<string> s;

    int n;
    string k;
    cin >> n;
    getline(cin, k);

    for (int i = 0; i < n; i++) {
        getline(cin, k);

        for (auto &c : k) {
            c = tolower(c);
        }

        for (int j = 0; j < k.length(); j++) {
            if (k[j] == ' ') {
                k[j] = '-';
            }
        }

        if (s.count(k) == 0)
            s.insert(k);
    }

    cout << s.size() << endl;

    return 0;
}