#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool pea_soup;
    bool pancakes;

    int n;
    cin >> n;

    while (n--) {
        pea_soup = false;
        pancakes = false;

        int k;
        cin >> k;

        string name;
        cin.ignore();
        getline(cin, name);

        while (k--) {
            string s;
            getline(cin, s);

            if (s == "pea soup") {
                pea_soup = true;
            } else if (s == "pancakes") {
                pancakes = true;
            }
        }

        if (pea_soup && pancakes) {
            cout << name << endl;
            return 0;
        }
    }

    cout << "Anywhere is fine I guess" << endl;

    return 0;
}