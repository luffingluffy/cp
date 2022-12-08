#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back
#define pf push_front

struct word {
    string word;
    int freq;
    int size;
    int width;
    int height;
};

bool cmp(word& w1, word& w2) {
    return w1.word < w2.word;
}
int ceildiv(int x, int y) {
    return (x + y - 1) / y;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int i = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }

        vector<word> v;
        int max_freq = 0;
        int width = 0;
        int height = 0;
        int total_height = 0;

        for (int i = 0; i < m; i++) {
            word w;
            cin >> w.word >> w.freq;
            max_freq = max(max_freq, w.freq);
            if (w.freq >= 5) {
                v.pb(w);
            }
        }

        for (auto& i : v) {
            i.size = 8 + ceildiv(40 * (i.freq - 4), (max_freq - 4));
            i.height = i.size;
            i.width = ceildiv(9 * i.word.length() * i.height, 16);
        }

        for (auto& i : v) {
            if (width + i.width > n) {
                total_height += height;
                width = 0;
                height = 0;
            }

            width += i.width + 10;
            height = max(height, i.height);
        }

        total_height += height;

        cout << "CLOUD " << i++ << ": " << total_height << endl;
    }

    return 0;
}