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
#define loop(i, a, b) for (__typeof(b) i = a; i < (b); ++i)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    scanf("%d", &n);
    vi a(n), b(n);
    loop(i, 0, n)
        scanf("%d", &a[i]);
    loop(i, 0, n)
        scanf("%d", &b[a[i] - 1]);

    vector<bool> seen(n, false);
    int swaps = n;
    loop(i, 0, n) if (!seen[i]) {
        swaps--;
        for (int j = i; !seen[j]; j = b[j] - 1)
            seen[j] = true;
    }
    printf((swaps & 1) ? "Impossible\n" : "Possible\n");

    return 0;
}