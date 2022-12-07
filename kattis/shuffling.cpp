#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

void in_shuffle(vector<int> &v) {
    int n = v.size();
    vector<int> v1, v2;

    for (int i = 0; i < n / 2; i++) {
        v1.pb(v[i]);
    }
    for (int i = n / 2; i < n; i++) {
        v2.pb(v[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        v[i * 2] = v2[i];
        v[i * 2 + 1] = v1[i];
    }

    if (n % 2) {
        v[n - 1] = v2[n / 2];
    }
}

void out_shuffle(vector<int> &v) {
    int n = v.size();
    vector<int> v1, v2;

    if (n % 2) {
        for (int i = 0; i < (n / 2) + 1; i++) {
            v1.pb(v[i]);
        }
        for (int i = (n / 2) + 1; i < n; i++) {
            v2.pb(v[i]);
        }
        v[n - 1] = v1[n / 2];
    } else {
        for (int i = 0; i < n / 2; i++) {
            v1.pb(v[i]);
        }
        for (int i = n / 2; i < n; i++) {
            v2.pb(v[i]);
        }
    }

    for (int i = 0; i < n / 2; i++) {
        v[i * 2] = v1[i];
        v[i * 2 + 1] = v2[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin.ignore();
    cin >> s;

    vi original_deck;
    vi shuffled_deck;
    int ans = 1;

    for (int i = 0; i < n; i++) {
        original_deck.pb(i);
        shuffled_deck.pb(i);
    }

    if (s == "out") {
        out_shuffle(shuffled_deck);
        while (original_deck != shuffled_deck) {
            out_shuffle(shuffled_deck);
            ans++;
        }
    } else {
        in_shuffle(shuffled_deck);
        while (original_deck != shuffled_deck) {
            in_shuffle(shuffled_deck);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}