#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s == "P=NP") {
            cout << "skipped" << endl;
        } else {
            int a = stoi(s.substr(0, s.find('+')));
            int b = stoi(s.substr(s.find('+') + 1));
            cout << a + b << endl;
        }
    }

    return 0;
}