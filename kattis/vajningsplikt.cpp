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

    string a, b, c;
    cin >> a >> b >> c;

    if (a == "South" && b == "North" && c == "East") {
        cout << "Yes" << endl;
    } else if (a == "North" && b == "South" && c == "West") {
        cout << "Yes" << endl;
    } else if (a == "East" && b == "West" && c == "North") {
        cout << "Yes" << endl;
    } else if (a == "West" && b == "East" && c == "South") {
        cout << "Yes" << endl;
    } else if (a == "North" && b == "East" && (c == "South" || c == "West")) {
        cout << "Yes" << endl;
    } else if (a == "South" && b == "West" && (c == "North" || c == "East")) {
        cout << "Yes" << endl;
    } else if (a == "West" && b == "North" && (c == "South" || c == "East")) {
        cout << "Yes" << endl;
    } else if (a == "East" && b == "South" && (c == "North" || c == "West")) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}