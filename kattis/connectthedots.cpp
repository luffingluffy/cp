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

void process(vs &v) {
    vii points(62);

    int numPoints = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (isdigit(v[i][j])) {
                numPoints++;
                points[v[i][j] - '0'] = {i, j};
            }
            if (isalpha(v[i][j])) {
                numPoints++;
                if (islower(v[i][j])) {
                    points[v[i][j] - 'a' + 10] = {i, j};
                } else {
                    points[v[i][j] - 'A' + 36] = {i, j};
                }
            }
        }
    }

    for (int i = 1; i < numPoints; i++) {
        ii p1 = points[i - 1];
        ii p2 = points[i];

        if (p1.first == p2.first) {
            int j = p1.first;
            if (p1.second > p2.second) {
                for (int i = p1.second - 1; i > p2.second; i--) {
                    if (v[j][i] == '|') {
                        v[j][i] = '+';
                    }
                    if (v[j][i] == '.') {
                        v[j][i] = '-';
                    }
                }
            }

            else {
                for (int i = p1.second + 1; i < p2.second; i++) {
                    if (v[j][i] == '|') {
                        v[j][i] = '+';
                    }
                    if (v[j][i] == '.') {
                        v[j][i] = '-';
                    }
                }
            }
        }

        else {
            int j = p1.second;
            if (p1.first > p2.first) {
                for (int i = p1.first - 1; i > p2.first; i--) {
                    if (v[i][j] == '-') {
                        v[i][j] = '+';
                    }
                    if (v[i][j] == '.') {
                        v[i][j] = '|';
                    }
                }
            }

            else {
                for (int i = p1.first + 1; i < p2.first; i++) {
                    if (v[i][j] == '-') {
                        v[i][j] = '+';
                    }
                    if (v[i][j] == '.') {
                        v[i][j] = '|';
                    }
                }
            }
        }
    }

    for (auto s : v) {
        cout << s << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vs v;
    string s;

    while (getline(cin, s)) {
        if (s == "") {
            process(v);
            v.clear();
            cout << endl;
        } else {
            v.push_back(s);
        }
    }
    process(v);

    return 0;
}