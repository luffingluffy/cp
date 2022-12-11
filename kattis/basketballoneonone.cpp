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
    cin >> s;

    int a = 0;
    int b = 0;
    int diff = 0;
    bool tie = false;

    for (int i = 0; i < s.length() - 1; i += 2) {
        int score = s[i + 1] - '0';
        if (s[i] == 'A') {
            a += score;
        } else {
            b += score;
        }

        if (a == 10 && b == 10) {
            tie = true;
        }

        diff = a - b;

        if (tie) {
            if (diff >= 2) {
                cout << "A" << endl;
                return 0;
            } else if (diff <= -2) {
                cout << "B" << endl;
                return 0;
            }
        } else {
            if (a >= 11) {
                cout << "A" << endl;
                return 0;
            } else if (b >= 11) {
                cout << "B" << endl;
                return 0;
            }
        }
    }

    return 0;
}