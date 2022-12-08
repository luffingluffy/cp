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

    string s;

    while (getline(cin, s)) {
        string pig = "";
        string word = "";
        int i = 0;

        while (i < s.length()) {
            while (i < s.length() && isalpha(s[i])) {
                word += s[i];
                i++;
            }

            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'y') {
                word += "yay";
            } else {
                int x = 0;
                while (1) {
                    if (word[x] == 'a' || word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u' || word[x] == 'y') {
                        break;
                    }
                    x++;
                }
                word += word.substr(0, x);
                word.erase(0, x);
                word += "ay";
            }

            pig += word + " ";
            word = "";
            i++;
        }
        cout << pig << endl;
    }

    return 0;
}