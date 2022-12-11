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
    unordered_map<string, string> m;
    while (getline(cin, s) && s != "") {
        string e, f;
        int index = s.find(' ');
        e = s.substr(0, index);
        f = s.substr(index + 1, s.size() - 1);

        m.insert({f, e});
    }

    while (getline(cin, s)) {
        if (m.count(s) > 0) {
            cout << m.find(s)->second << endl;
        } else {
            cout << "eh" << endl;
        }
    }

    return 0;
}