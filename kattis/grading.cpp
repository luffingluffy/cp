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

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int score = 0;
    cin >> score;

    if (score < e) {
        cout << "F" << endl;
    } else if (score < d) {
        cout << "E" << endl;
    } else if (score < c) {
        cout << "D" << endl;
    } else if (score < b) {
        cout << "C" << endl;
    } else if (score < a) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }

    return 0;
}