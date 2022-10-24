#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    int n, a, b, c;
    cin >> a >> b >> c >> n;
    
    a + b + c >= n && a >= 1 && b >= 1 && c >= 1 && n >= 3 ? printf("YES\n"): printf("NO\n");

    return 0;
}