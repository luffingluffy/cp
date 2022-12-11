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

unordered_map<string, ll> nameValue;

unordered_map<string, char> classMap = {
    {"upper", '1'},
    {"middle", '2'},
    {"lower", '3'}};

int cmp(string a, string b) {
    ll x = nameValue[a];
    ll y = nameValue[b];
    if (x != y) {
        return nameValue[a] < nameValue[b];
    } else {
        return a.compare(b) < 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        nameValue.clear();
        vector<string> names;

        for (int i = 0; i < n; i++) {
            string name;
            cin >> name;
            name.pop_back();
            names.push_back(name);

            string classValue;

            string c;
            cin >> c;
            string trash;
            cin >> trash;

            stringstream ss(c);
            string token;

            while (getline(ss, token, '-')) {
                classValue += classMap[token];
            }

            classValue = string(classValue.rbegin(), classValue.rend());

            while (classValue.size() <= 10) {
                classValue += '2';
            }
            for (int i = 0; i < 10; i++) {
                nameValue[name] *= 10;
                nameValue[name] += (classValue[i] - '0');
            }
        }

        sort(names.begin(), names.end(), cmp);

        for (auto x : names) {
            cout << x << endl;
        }

        string s = "";
        for (int i = 0; i < 30; i++) s += "=";
        cout << s << endl;
    }

    return 0;
}