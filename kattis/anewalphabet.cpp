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

    string cipher[] = {"@", "8", "(", "|)", "3", "#", "6",
                       "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]",
                       "0", "|D", "(,)", "|Z", "$", "\'][\'", "|_|",
                       "\\/", "\\/\\/", "}{", "`/", "2"};

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        int c = s[i];
        if (isalpha(s[i])) {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
            cout << cipher[c - 'a'];
        } else
            cout << s[i];
    }

    return 0;
}