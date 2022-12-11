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

unordered_map<string, int> months = {
    {"Jan", 1},
    {"Feb", 2},
    {"Mar", 3},
    {"Apr", 4},
    {"May", 5},
    {"Jun", 6},
    {"Jul", 7},
    {"Aug", 8},
    {"Sep", 9},
    {"Oct", 10},
    {"Nov", 11},
    {"Dec", 12}};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int dd;
        string s;

        cin >> dd >> s;

        int mm = months[s];

        if ((dd >= 21 && mm == 3) || (dd <= 20 && mm == 4)) {
            cout << "Aries" << endl;
        } else if ((dd >= 21 && mm == 4) || (dd <= 20 && mm == 5)) {
            cout << "Taurus" << endl;
        } else if ((dd >= 21 && mm == 5) || (dd <= 21 && mm == 6)) {
            cout << "Gemini" << endl;
        } else if ((dd >= 22 && mm == 6) || (dd <= 22 && mm == 7)) {
            cout << "Cancer" << endl;
        } else if ((dd >= 23 && mm == 7) || (dd <= 22 && mm == 8)) {
            cout << "Leo" << endl;
        } else if ((dd >= 23 && mm == 8) || (dd <= 21 && mm == 9)) {
            cout << "Virgo" << endl;
        } else if ((dd >= 22 && mm == 9) || (dd <= 22 && mm == 10)) {
            cout << "Libra" << endl;
        } else if ((dd >= 23 && mm == 10) || (dd <= 22 && mm == 11)) {
            cout << "Scorpio" << endl;
        } else if ((dd >= 23 && mm == 11) || (dd <= 21 && mm == 12)) {
            cout << "Sagittarius" << endl;
        } else if ((dd >= 22 && mm == 12) || (dd <= 20 && mm == 1)) {
            cout << "Capricorn" << endl;
        } else if ((dd >= 21 && mm == 1) || (dd <= 19 && mm == 2)) {
            cout << "Aquarius" << endl;
        } else if ((dd >= 20 && mm == 2) || (dd <= 20 && mm == 3)) {
            cout << "Pisces" << endl;
        }
    }

    return 0;
}