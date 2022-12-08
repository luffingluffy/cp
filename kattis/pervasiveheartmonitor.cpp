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
        stringstream ss(s);
        string word;
        string name = "";
        double sum = 0;
        int count = 0;
        while (ss >> word) {
            if (word[0] >= '0' && word[0] <= '9') {
                sum += stod(word);
                count++;
            } else {
                name += " " + word;
            }
        }
        cout << fixed << setprecision(4) << sum / count << name << endl;
    }

    return 0;
}