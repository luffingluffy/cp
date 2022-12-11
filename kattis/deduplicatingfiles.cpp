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

int sumToN(int n) {
    int sumToN = 0;
    for (int i = 0; i <= n; i++) {
        sumToN += i;
    }
    return sumToN;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        unordered_set<string> sset;
        unordered_map<int, unordered_map<string, int>> m;

        cin.ignore();
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            sset.insert(s);

            int h = 0;
            for (auto c : s) {
                h ^= c;
            }
            m[h][s]++;
        }

        int collision = 0;

        for (auto i : m) {
            vi num;
            for (auto j : i.second) {
                num.push_back(j.second);
            }

            for (int j = 0; j < num.size() - 1; j++) {
                for (int k = j + 1; k < num.size(); k++) {
                    collision += num[j] * num[k];
                }
            }
        }

        cout << sset.size() << " " << collision << endl;
    }

    return 0;
}