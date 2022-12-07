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

    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s;

    while (getline(cin, s)) {
        for (int i = 0; s[i]; i++) {
            if (s[i] == ' ')
                cout << " ";
            else {
                int j = 0;
                while (s[i] != keyboard[j + 1]) j++;
                cout << keyboard[j];
            }
        }
        cout << endl;
    }

    return 0;
}