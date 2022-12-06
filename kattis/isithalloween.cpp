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

    string s;
    getline(cin, s);

    if (s == "OCT 31" || s == "DEC 25") {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

    return 0;
}