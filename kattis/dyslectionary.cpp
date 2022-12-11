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

bool cmp(string a, string b) {
    int n = a.length() - 1;

    while (n >= 0 && a[n] == b[n]) {
        n--;
    }

    return a[n] < b[n];
}

void process(vs &v) {
    int maxLength = 0;

    for (int i = 0; i < v.size(); i++) {
        maxLength = max(maxLength, (int)v[i].size());
    }

    for (auto &x : v) {
        int diff = maxLength - x.size();
        while (diff--) {
            x.insert(0, 1, ' ');
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (auto x : v) {
        cout << x << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vs wordGroup;

    string word;

    while (getline(cin, word)) {
        if (word == "") {
            process(wordGroup);
            cout << endl;
            wordGroup.clear();
        } else {
            wordGroup.push_back(word);
        }
    }

    process(wordGroup);

    return 0;
}