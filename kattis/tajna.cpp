#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int n = s.length();
    int c = sqrt(n);

    while (n % c != 0) {
        c--;
    }
    int r = n / c;

    vector<vector<char>> v(r, vector<char>(c));

    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            v[i][j] = s[k];
            k++;
        }
    }

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << v[i][j];
        }
    }
    cout << endl;

    return 0;
}