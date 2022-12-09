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

bool isBlack = false;

unordered_map<int, char> map1 = {
    {2, 'a'},
    {6, 'b'},
    {10, 'c'},
    {14, 'd'},
    {18, 'e'},
    {22, 'f'},
    {26, 'g'},
    {30, 'h'}};

unordered_map<int, char> map2 = {
    {1, '8'},
    {3, '7'},
    {5, '6'},
    {7, '5'},
    {9, '4'},
    {11, '3'},
    {13, '2'},
    {15, '1'}};

bool cmp(string s1, string s2) {
    if (s1 == s2) return false;
    map<char, int> vals;
    vals['K'] = 0;
    vals['Q'] = 1;
    vals['R'] = 2;
    vals['B'] = 3;
    vals['N'] = 4;

    if (s1.length() < s2.length()) {
        return false;
    }

    if (s1.length() > s2.length()) {
        return true;
    }

    if (s1.length() == 2) {
        if (s1[1] == s2[1]) {
            return s1[0] < s2[0];
        }
        return isBlack ^ (s1[1] < s2[1]);
    }

    if (vals[s1[0]] == vals[s2[0]]) {
        if (s1[2] == s2[2]) {
            return s1[1] < s2[1];
        }
        return isBlack ^ (s1[2] < s2[2]);
    }

    return vals[s1[0]] < vals[s2[0]];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vvc grid(17, vc(33));

    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 33; j++) {
            cin >> grid[i][j];
        }
    }

    cout << "White: ";

    vs white_pieces;
    for (int i = 16; i >= 0; i--) {
        for (int j = 0; j < 33; j++) {
            string s = "";
            if (grid[i][j] == 'K') {
                s.push_back(grid[i][j]);
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            } else if (grid[i][j] == 'Q') {
                s.push_back(grid[i][j]);
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            } else if (grid[i][j] == 'R') {
                s.push_back(grid[i][j]);
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            } else if (grid[i][j] == 'B') {
                s.push_back(grid[i][j]);
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            } else if (grid[i][j] == 'N') {
                s.push_back(grid[i][j]);
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            } else if (grid[i][j] == 'P') {
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                white_pieces.pb(s);
            }
        }
    }

    if (white_pieces.size() == 0) {
        cout << endl;
    }

    sort(white_pieces.begin(), white_pieces.end(), cmp);

    for (int i = 0; i < white_pieces.size(); i++) {
        if (i == white_pieces.size() - 1) {
            cout << white_pieces[i] << endl;
        } else {
            cout << white_pieces[i] << ",";
        }
    }

    isBlack = true;
    cout << "Black: ";

    vs black_pieces;
    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 33; j++) {
            string s = "";
            if (grid[i][j] == 'k') {
                s.push_back('K');
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            } else if (grid[i][j] == 'q') {
                s.push_back('Q');
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            } else if (grid[i][j] == 'r') {
                s.push_back('R');
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            } else if (grid[i][j] == 'b') {
                s.push_back('B');
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            } else if (grid[i][j] == 'n') {
                s.push_back('N');
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            } else if (grid[i][j] == 'p') {
                s.push_back(map1[j]);
                s.push_back(map2[i]);
                black_pieces.pb(s);
            }
        }
    }

    sort(black_pieces.begin(), black_pieces.end(), cmp);

    for (int i = 0; i < black_pieces.size(); i++) {
        if (i == black_pieces.size() - 1) {
            cout << black_pieces[i] << endl;
        } else {
            cout << black_pieces[i] << ",";
        }
    }

    return 0;
}