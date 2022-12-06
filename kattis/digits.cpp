#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    while (cin >> s && s != "END") {
        if (s == "1") {
            cout << 1 << endl;
            continue;
        }

        int i = 2;
        long curr = s.length();

        while (1) {
            long next = to_string(curr).length();
            if (curr == next) {
                cout << i << endl;
                break;
            } else {
                curr = next;
                i++;
            }
        }
    }

    return 0;
}