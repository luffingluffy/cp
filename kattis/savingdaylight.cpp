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

    int h1, m1, h2, m2;
    string m, d, y;

    while (cin >> m && cin >> d && cin >> y) {
        cin >> h1;
        cin.ignore();
        cin >> m1;

        cin >> h2;
        cin.ignore();
        cin >> m2;

        cout << m << " " << d << " " << y << " ";

        int hrs = h2 - h1;
        int mins = m2 - m1;

        if (mins < 0) {
            mins += 60;
            hrs--;
        }

        cout << hrs << " hours " << mins << " minutes" << endl;
    }

    return 0;
}