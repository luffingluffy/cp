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

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s1;
        string s2;

        getline(cin, s1);
        getline(cin, s2);

        string num1;
        string num2;

        string token;
        stringstream ss1(s1);
        stringstream ss2(s2);

        while (getline(ss1, token, ' ')) {
            num1 += token;
        }

        while (getline(ss2, token, ' ')) {
            num2 += token;
        }

        int sum = stoi(num1) + stoi(num2);

        string out = to_string(sum);

        for (auto x : out) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}