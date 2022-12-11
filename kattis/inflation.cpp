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

    priority_queue<double> cq;
    while (n--) {
        double c;
        cin >> c;
        cq.push(c);
    }

    double ans = 1;
    for (int i = cq.size(); i > 0; i--) {
        double maxFill = cq.top() / i;

        if (maxFill > 1) {
            cout << "impossible" << endl;
            return 0;
        }

        ans = min(ans, maxFill);
        cq.pop();
    }

    cout << ans << endl;
}