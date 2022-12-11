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

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        vi r, b;

        int s;
        cin >> s;

        for (int j = 0; j < s; j++) {
            int num;
            char color;

            cin >> num;
            cin >> color;

            num -= 1;

            if (color == 'R') {
                r.push_back(num);
            } else {
                b.push_back(num);
            }
        }

        sort(r.rbegin(), r.rend());
        sort(b.rbegin(), b.rend());

        int size = min(r.size(), b.size());

        int length = 0;

        for (int j = 0; j < size; j++) {
            length += b[j];
            length += r[j];
        }

        cout << "Case #" << i + 1 << ": " << length << endl;
    }

    return 0;
}